using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(CharacterController))]
public class PlayerDash : MonoBehaviour
{
    [Header("Dash Settings")]
    [SerializeField] float _dashDistance = 5f;
    [SerializeField] float _dashDuration = 0.2f;
    [SerializeField] float _dashCooldown = 1f;

    InputActions _inputActions;
    CharacterController _controller;

    Vector2 _latestMoveInput;
    bool _dashPressed;
    bool _canDash = true;
    bool _isDashing = false;

    float _dashTime;
    float _dashCooldownTimer;
    Vector3 _dashDirection;

    void Awake()
    {
        _inputActions = new InputActions();
        _controller = GetComponent<CharacterController>();
    }

    void OnEnable()
    {
        _inputActions.Player.Enable();

        // Listen for dash input
        _inputActions.Player.Dash.performed += OnDashPerformed;

        // Listen for move input directly
        _inputActions.Player.Move.performed += OnMovePerformed;
        _inputActions.Player.Move.canceled += OnMovePerformed;
    }

    void OnDisable()
    {
        _inputActions.Player.Dash.performed -= OnDashPerformed;
        _inputActions.Player.Move.performed -= OnMovePerformed;
        _inputActions.Player.Move.canceled -= OnMovePerformed;

        _inputActions.Player.Disable();
    }

    void OnMovePerformed(InputAction.CallbackContext context)
    {
        _latestMoveInput = context.ReadValue<Vector2>();
    }

    void OnDashPerformed(InputAction.CallbackContext context)
    {
        _dashPressed = true;
    }

    void Update()
    {
        // Handle cooldown
        if (!_canDash)
        {
            _dashCooldownTimer -= Time.deltaTime;
            if (_dashCooldownTimer <= 0f)
                _canDash = true;
        }

        // Start dash if pressed
        if (_dashPressed && _canDash && !_isDashing)
        {
            StartDash();
        }

        // Perform dash movement
        if (_isDashing)
        {
            _dashTime += Time.deltaTime;
            float dashSpeed = _dashDistance / _dashDuration;

            // Move in dash direction (ignoring gravity for snappy dash)
            _controller.Move(_dashDirection * dashSpeed * Time.deltaTime);

            if (_dashTime >= _dashDuration)
            {
                _isDashing = false;
            }
        }

        _dashPressed = false;
    }

    void StartDash()
    {
        // Use input direction, fallback to forward if no input
        Vector3 inputDir = new Vector3(_latestMoveInput.x, 0f, _latestMoveInput.y);
        _dashDirection = inputDir.sqrMagnitude > 0.01f ? inputDir.normalized : transform.forward;

        _isDashing = true;
        _dashTime = 0f;
        _canDash = false;
        _dashCooldownTimer = _dashCooldown;
    }
}
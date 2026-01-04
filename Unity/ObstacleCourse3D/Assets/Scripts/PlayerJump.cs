using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(CharacterController))]
public class PlayerJump : MonoBehaviour
{
    [Header("Jump Settings")]
    [SerializeField] float _jumpHeight = 2.5f;
    [SerializeField] float _gravity = -20f;

    [Header("Double Jump")]
    [SerializeField] bool _enableDoubleJump = false;

    [Header("Hover Settings")]
    [SerializeField] bool _enableHover = true;
    [SerializeField] float _hoverGravityPercent = 0.3f;
    [SerializeField] float _hoverDelay = 0.2f;
    [SerializeField] GameObject _hoverVisual;

    InputActions _inputActions;
    CharacterController _controller;

    float _verticalVelocity;

    // Input
    bool _jumpPressed;
    bool _hoverHeld;

    // Jump state
    bool _jumpStarted;
    bool _hasDoubleJumped;

    // Hover state
    bool _isHovering;
    float _hoverTimer;

    public float VerticalVelocity => _verticalVelocity;

    void Awake()
    {
        _inputActions = new InputActions();
        _controller = GetComponent<CharacterController>();
    }

    void OnEnable()
    {
        _inputActions.Player.Enable();

        _inputActions.Player.Jump.performed += OnJump;
        _inputActions.Player.Hover.performed += OnHoverStarted;
        _inputActions.Player.Hover.canceled += OnHoverCanceled;
    }

    void OnDisable()
    {
        _inputActions.Player.Jump.performed -= OnJump;
        _inputActions.Player.Hover.performed -= OnHoverStarted;
        _inputActions.Player.Hover.canceled -= OnHoverCanceled;

        _inputActions.Player.Disable();
    }

    void Update()
    {
        HandleGroundedState();
        HandleJump();
        HandleHover();
        ApplyGravity();
        ApplyMovement();

        _jumpPressed = false;
    }

    void HandleGroundedState()
    {
        if (!_controller.isGrounded) return;

        if (_verticalVelocity < 0f)
            _verticalVelocity = -2f;

        _jumpStarted = false;
        _hasDoubleJumped = false;
        _isHovering = false;
        _hoverTimer = 0f;

        if (_hoverVisual != null)
            _hoverVisual.SetActive(false);
    }

    void HandleJump()
    {
        if (!_jumpPressed) return;

        if (!_jumpStarted)
        {
            Jump();
            _jumpStarted = true;
        }
        else if (_enableDoubleJump && !_hasDoubleJumped && !_isHovering)
        {
            Jump();
            _hasDoubleJumped = true;
        }
    }

    void HandleHover()
    {
        if (!_enableHover || !_hoverHeld || !_jumpStarted || _controller.isGrounded)
            return;

        if (_isHovering)
            return;

        _hoverTimer += Time.deltaTime;

        if (_hoverTimer < _hoverDelay)
            return;

        _isHovering = true;
        _hasDoubleJumped = true;

        if (_verticalVelocity > 0f)
            _verticalVelocity = 0f;

        if (_hoverVisual != null)
            _hoverVisual.SetActive(true);
    }

    void ApplyGravity()
    {
        float gravityMultiplier = _isHovering ? _hoverGravityPercent : 1f;
        _verticalVelocity += _gravity * gravityMultiplier * Time.deltaTime;
    }

    void ApplyMovement()
    {
        _controller.Move(Vector3.up * _verticalVelocity * Time.deltaTime);
    }

    void Jump()
    {
        _verticalVelocity = Mathf.Sqrt(_jumpHeight * -2f * _gravity);
    }

    // Input callbacks
    void OnJump(InputAction.CallbackContext _)
    {
        _jumpPressed = true;
    }

    void OnHoverStarted(InputAction.CallbackContext _)
    {
        _hoverHeld = true;
    }

    void OnHoverCanceled(InputAction.CallbackContext _)
    {
        _hoverHeld = false;
        _isHovering = false;
        _hoverTimer = 0f;

        if (_hoverVisual != null)
            _hoverVisual.SetActive(false);
    }
}
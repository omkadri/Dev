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
    [SerializeField] GameObject _hoverVisual;

    InputActions _inputActions;
    CharacterController _controller;

    float _verticalVelocity;

    // Input
    bool _jumpPressed;
    bool _hoverHeld;

    // Hover
    bool _isHovering;

    // Double jump
    bool _hasDoubleJumped;

    // Track jump state
    bool _jumpStarted;

    public float VerticalVelocity => _verticalVelocity;

    void Awake()
    {
        _inputActions = new InputActions();
        _controller = GetComponent<CharacterController>();
    }

    void OnEnable()
    {
        _inputActions.Player.Enable();

        _inputActions.Player.Jump.performed += ctx => _jumpPressed = true;
        _inputActions.Player.Hover.performed += ctx => _hoverHeld = true;
        _inputActions.Player.Hover.canceled += ctx => _hoverHeld = false;
    }

    void OnDisable()
    {
        _inputActions.Player.Jump.performed -= ctx => _jumpPressed = true;
        _inputActions.Player.Hover.performed -= ctx => _hoverHeld = true;
        _inputActions.Player.Hover.canceled -= ctx => _hoverHeld = false;

        _inputActions.Player.Disable();
    }

    void Update()
    {
        // Reset grounded state
        if (_controller.isGrounded)
        {
            if (_verticalVelocity < 0f) _verticalVelocity = -2f;

            _hasDoubleJumped = false;
            _isHovering = false;
            _jumpStarted = false;
        }

        // --- Jump logic ---
        if (_jumpPressed)
        {
            if (!_jumpStarted)
            {
                // First jump always allowed
                Jump();
                _jumpStarted = true;
            }
            else if (_enableDoubleJump && !_hasDoubleJumped && !_isHovering)
            {
                // Double jump
                Jump();
                _hasDoubleJumped = true;
            }
        }

        // --- Hover logic ---
        if (_enableHover && _hoverHeld && _jumpStarted && !_controller.isGrounded && !_isHovering)
        {
            _isHovering = true;
            if (_hoverVisual != null)
            { 
                _hoverVisual.SetActive(true);  
            }

            // Cancel double jump
            _hasDoubleJumped = true;

            // Stop any upward movement immediately
            if (_verticalVelocity > 0f)
                _verticalVelocity = 0f;
        }

        // Stop hovering if hover released
        if (!_hoverHeld)
        {
            _isHovering = false;
            if (_hoverVisual != null)
            { 
                _hoverVisual.SetActive(false);  
            }
        }

        // --- Apply gravity ---
        float gravityMultiplier = _isHovering ? _hoverGravityPercent : 1f;
        _verticalVelocity += _gravity * gravityMultiplier * Time.deltaTime;

        _controller.Move(new Vector3(0f, _verticalVelocity, 0f) * Time.deltaTime);

        _jumpPressed = false; // reset one-frame press
    }

    void Jump()
    {
        _verticalVelocity = Mathf.Sqrt(_jumpHeight * -2f * _gravity);
    }
}
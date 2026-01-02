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

    InputActions _inputActions;
    CharacterController _controller;

    float _verticalVelocity;
    bool _jumpPressed;
    bool _hasDoubleJumped;

    public float VerticalVelocity => _verticalVelocity;

    void Awake()
    {
        _inputActions = new InputActions();
        _controller = GetComponent<CharacterController>();
    }

    void OnEnable()
    {
        _inputActions.Player.Enable();
        _inputActions.Player.Jump.performed += OnJumpPerformed;
    }

    void OnDisable()
    {
        _inputActions.Player.Jump.performed -= OnJumpPerformed;
        _inputActions.Player.Disable();
    }

    void OnJumpPerformed(InputAction.CallbackContext context)
    {
        _jumpPressed = true; // register jump press once
    }

    void Update()
    {
        if (_controller.isGrounded)
        {
            if (_verticalVelocity < 0f)
                _verticalVelocity = -2f;

            _hasDoubleJumped = false;

            if (_jumpPressed)
            {
                Jump();
            }
        }
        else
        {
            if (_jumpPressed && _enableDoubleJump && !_hasDoubleJumped)
            {
                Jump();
                _hasDoubleJumped = true;
            }
        }

        _verticalVelocity += _gravity * Time.deltaTime;
        _controller.Move(new Vector3(0, _verticalVelocity, 0) * Time.deltaTime);

        _jumpPressed = false; // reset after handling
    }

    void Jump()
    {
        _verticalVelocity = Mathf.Sqrt(_jumpHeight * -2f * _gravity);
    }
}
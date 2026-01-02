using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(CharacterController))]
public class PlayerJump : MonoBehaviour
{
    [Header("Jump Settings")]
    [SerializeField] float _jumpHeight = 2.5f;
    [SerializeField] float _gravity = -20f;

    InputActions _inputActions;
    CharacterController _controller;

    float _verticalVelocity;
    bool _jumpPressed;

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
        _inputActions.Player.Jump.canceled += OnJump;
    }

    void OnDisable()
    {
        _inputActions.Player.Jump.performed -= OnJump;
        _inputActions.Player.Jump.canceled -= OnJump;
        _inputActions.Player.Disable();
    }

    void OnJump(InputAction.CallbackContext context)
    {
        _jumpPressed = context.ReadValueAsButton();
    }

    void Update()
    {
        if (_controller.isGrounded)
        {
            if (_verticalVelocity < 0f)
                _verticalVelocity = -2f; // stick to ground

            if (_jumpPressed)
            {
                _verticalVelocity = Mathf.Sqrt(_jumpHeight * -2f * _gravity);
            }
        }

        _verticalVelocity += _gravity * Time.deltaTime;
    }
}
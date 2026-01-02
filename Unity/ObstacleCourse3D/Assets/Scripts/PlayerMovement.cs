using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(CharacterController))]
public class PlayerMovement : MonoBehaviour
{
    [Header("Movement Settings")]
    [SerializeField] float _speed = 10f;

    [Header("Rotation Settings")]
    [SerializeField] bool _snapTurning = false;
    [SerializeField] float _turnRotationSpeed = 10f;

    InputActions _inputActions;
    Vector2 _moveInput;

    CharacterController _controller;
    PlayerJump _jump;

    void Awake()
    {
        _inputActions = new InputActions();
        _controller = GetComponent<CharacterController>();
        _jump = GetComponent<PlayerJump>();
    }

    void OnEnable()
    {
        _inputActions.Player.Enable();
        _inputActions.Player.Move.performed += OnMove;
        _inputActions.Player.Move.canceled += OnMove;
    }

    void OnDisable()
    {
        _inputActions.Player.Move.performed -= OnMove;
        _inputActions.Player.Move.canceled -= OnMove;
        _inputActions.Player.Disable();
    }

    void OnMove(InputAction.CallbackContext context)
    {
        _moveInput = context.ReadValue<Vector2>();
    }

    void Update()
    {
        Vector3 horizontal = new Vector3(_moveInput.x, 0f, _moveInput.y);

        Vector3 velocity = new Vector3(
            horizontal.x * _speed,
            _jump.VerticalVelocity,
            horizontal.z * _speed
        );

        _controller.Move(velocity * Time.deltaTime);

        if (horizontal.sqrMagnitude > 0.001f)
        {
            Quaternion targetRotation = Quaternion.LookRotation(horizontal);

            transform.rotation = _snapTurning
                ? targetRotation
                : Quaternion.Slerp(
                    transform.rotation,
                    targetRotation,
                    _turnRotationSpeed * Time.deltaTime
                );
        }
    }
}
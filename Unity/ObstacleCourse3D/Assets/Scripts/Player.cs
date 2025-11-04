using UnityEngine;
using UnityEngine.InputSystem;

public class Player : MonoBehaviour
{
    [Header("Movement Settings")]
    [SerializeField] float _speed = 10f;

    [Header("Rotation Settings")]
    [SerializeField] bool _snapTurning = false; // Toggle for instant rotation
    [SerializeField] float _turnRotationSpeed = 10f; // Speed for smooth rotation

    InputActions _inputActions;
    Vector2 _moveInput;

    void Awake()
    {
        _inputActions = new InputActions();
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
        Vector3 move = new Vector3(_moveInput.x, 0f, _moveInput.y);

        transform.Translate(move * _speed * Time.deltaTime, Space.World);

        if (move.sqrMagnitude > 0.001f)
        {
            Quaternion targetRotation = Quaternion.LookRotation(move);

            if (_snapTurning)
            {
                // Instantly face the direction of movement
                transform.rotation = targetRotation;
            }
            else
            {
                // Smoothly rotate towards movement direction
                transform.rotation = Quaternion.Slerp(
                    transform.rotation,
                    targetRotation,
                    _turnRotationSpeed * Time.deltaTime
                );
            }
        }
    }
}
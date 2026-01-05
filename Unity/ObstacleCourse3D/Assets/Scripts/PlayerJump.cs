using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(Rigidbody))]
public class PlayerJump : MonoBehaviour
{
    [Header("Jump Settings")]
    [SerializeField] float _jumpForce = 7f;          // Upward velocity
    [SerializeField] float _fallMultiplier = 2.5f;   // Gravity multiplier when falling
    [SerializeField] float _lowJumpMultiplier = 2f;  // Gravity multiplier for short hops

    [Header("Ground Check")]
    [SerializeField] Transform _groundCheck;
    [SerializeField] float _groundCheckRadius = 0.2f;
    [SerializeField] LayerMask _groundLayer;

    Rigidbody _rb;
    InputActions _inputActions;
    bool _isGrounded;

    void Awake()
    {
        _rb = GetComponent<Rigidbody>();
        _inputActions = new InputActions();
    }

    void OnEnable()
    {
        _inputActions.Player.Enable();
        _inputActions.Player.Jump.performed += OnJump;
    }

    void OnDisable()
    {
        _inputActions.Player.Jump.performed -= OnJump;
        _inputActions.Player.Disable();
    }

    void Update()
    {
        // Check if the player is on the ground
        _isGrounded = Physics.CheckSphere(_groundCheck.position, _groundCheckRadius, _groundLayer);
    }

    void FixedUpdate()
    {
        ApplyBetterJumpPhysics();
    }

    void OnJump(InputAction.CallbackContext context)
    {
        if (_isGrounded)
        {
            // Instant jump by setting Y velocity directly
            _rb.linearVelocity = new Vector3(_rb.linearVelocity.x, _jumpForce, _rb.linearVelocity.z);
        }
    }

    void ApplyBetterJumpPhysics()
    {
        if (_rb.linearVelocity.y < 0) 
        {
            // Falling faster than normal
            _rb.linearVelocity += Vector3.up * Physics.gravity.y * (_fallMultiplier - 1) * Time.fixedDeltaTime;
        }
        else if (_rb.linearVelocity.y > 0 && !_inputActions.Player.Jump.IsPressed())
        {
            // Short hop if jump button released early
            _rb.linearVelocity += Vector3.up * Physics.gravity.y * (_lowJumpMultiplier - 1) * Time.fixedDeltaTime;
        }
    }

    // Optional: visualize the ground check in the Scene view
    void OnDrawGizmosSelected()
    {
        if (_groundCheck != null)
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(_groundCheck.position, _groundCheckRadius);
        }
    }
}
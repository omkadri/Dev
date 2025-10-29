using UnityEngine;
using UnityEngine.InputSystem;

public class Ball : MonoBehaviour
{
    [SerializeField] float _speed = 40f;
    [SerializeField] Vector2 _direction = new Vector2(1f, 1f); // Initial direction
    [SerializeField] bool _isActivated = false;

    InputActions _inputActions;
    InputAction _launchballAction;

    void Awake()
    {
        _inputActions = new InputActions();
        _launchballAction = _inputActions.Player.LaunchBall;
        _direction = _direction.normalized;
    }

    void OnEnable()
    {
        _inputActions.Enable();
        _launchballAction.performed += OnLaunchBall; // Subscribe to input
    }

    void OnDisable()
    {
        _launchballAction.performed -= OnLaunchBall; // Unsubscribe
        _inputActions.Disable();
    }

    private void OnLaunchBall(InputAction.CallbackContext context)
    {
        if (!_isActivated)
        {
            transform.SetParent(null); // Detach from paddle
            _isActivated = true;
        }
    }

    void FixedUpdate()
    {
        if (!_isActivated) return;

        float distance = _speed * Time.fixedDeltaTime;
        Vector2 currentPosition = transform.position;

        // Check for collision in movement direction
        RaycastHit2D hit = Physics2D.Raycast(currentPosition, _direction, distance);

        if (hit.collider != null)
        {
            transform.position = hit.point;

            // Handle deflection
            IDeflector deflector = hit.collider.GetComponent<IDeflector>();
            if (deflector != null)
            {
                _direction = deflector.GetDeflection(transform.position, _direction).normalized;
            }

            // Nudge forward to prevent sticking
            transform.position += (Vector3)(_direction * (_speed * 0.01f));
        }
        else
        {
            // Move normally
            transform.position += (Vector3)(_direction * distance);
        }
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        IDeflector deflector = other.GetComponent<IDeflector>();
        if (deflector != null)
        {
            _direction = deflector.GetDeflection(transform.position, _direction).normalized;
        }
    }
}
using UnityEngine;
using UnityEngine.InputSystem;

public class Ball : MonoBehaviour
{
    [Header("Movement Settings")]
    [SerializeField] float _speed = 40f;
    [SerializeField] Vector2 _direction = new Vector2(1f, 1f);
    [SerializeField] bool _isActivated = false;

    [Header("Launch Settings")]
    [Tooltip("Minimum and maximum allowed launch angles (degrees, relative to the +X axis).")]
    [SerializeField] float _minLaunchAngle = 20f;
    [SerializeField] float _maxLaunchAngle = 160f;

    InputActions _inputActions;
    InputAction _launchBallAction;

    Camera _mainCamera;

    void Awake()
    {
        _inputActions = new InputActions();
        _launchBallAction = _inputActions.Player.LaunchBall;
        _direction = _direction.normalized;
        _mainCamera = Camera.main;
    }

    void OnEnable()
    {
        _inputActions.Enable();
        _launchBallAction.performed += OnLaunchBall;
    }

    void OnDisable()
    {
        _launchBallAction.performed -= OnLaunchBall;
        _inputActions.Disable();
    }

    void OnLaunchBall(InputAction.CallbackContext context)
    {
        if (_isActivated)
            return;

        Vector3 mouseScreenPos = Mouse.current.position.ReadValue();
        Vector3 mouseWorldPos = _mainCamera.ScreenToWorldPoint(mouseScreenPos);
        mouseWorldPos.z = 0f;

        Vector2 launchDir = (mouseWorldPos - transform.position).normalized;

        // Clamp launch direction to allowed angles
        launchDir = ClampLaunchDirection(launchDir);

        _direction = launchDir;
        transform.SetParent(null);
        _isActivated = true;
    }

    void FixedUpdate()
    {
        if (!_isActivated) return;

        float distance = _speed * Time.fixedDeltaTime;
        Vector2 currentPosition = transform.position;

        RaycastHit2D hit = Physics2D.Raycast(currentPosition, _direction, distance);

        if (hit.collider != null)
        {
            transform.position = hit.point;

            IDeflector deflector = hit.collider.GetComponent<IDeflector>();
            if (deflector != null)
            {
                _direction = deflector.GetDeflection(transform.position, _direction).normalized;
            }

            // Nudge forward to avoid getting stuck
            transform.position += (Vector3)(_direction * (_speed * 0.01f));
        }
        else
        {
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

    /// <summary>
    /// Clamps a launch direction to within allowed launch angles.
    /// Prevents backward or downward launches.
    /// </summary>
    Vector2 ClampLaunchDirection(Vector2 dir)
    {
        // Convert direction to angle relative to +X axis
        float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;

        // Clamp angle to limits
        angle = Mathf.Clamp(angle, _minLaunchAngle, _maxLaunchAngle);

        // Convert back to a direction vector
        return new Vector2(Mathf.Cos(angle * Mathf.Deg2Rad), Mathf.Sin(angle * Mathf.Deg2Rad)).normalized;
    }
}
using UnityEngine;
using UnityEngine.InputSystem;
using System;
using System.Collections;

public class Ball : MonoBehaviour
{
    public static int ActiveCount { get; private set; } = 0;

    [Header("Movement Settings")]
    [SerializeField, Range(0f, 10f)] float _speed = 10f;
    [SerializeField] Vector2 _direction = new Vector2(1f, 1f);
    [SerializeField] bool _isActivated = false;

    [Header("Launch Settings")]
    [Tooltip("Minimum and maximum allowed launch angles (degrees, relative to the +X axis).")]
    [SerializeField] float _minLaunchAngle = 20f;
    [SerializeField] float _maxLaunchAngle = 160f;

    [Header("PowerUps")]
    [SerializeField] bool _slowBall = false;
    [SerializeField] int _slowBallSpeed = 5;
    [SerializeField] bool _fastBall = false;
    [SerializeField] int _fastBallSpeed = 20;
    [SerializeField] bool _throughBall = false;


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

    void Start()
    {
        if (_slowBall) _speed = _slowBallSpeed;
        if (_fastBall) _speed = _fastBallSpeed;//TODO: Fix issue where slow ball and fast ball can be enabled at the same time
    }

    void OnEnable()
    {
        PowerUp.OnPowerUpCollected += HandlePowerUpCollected;
        _inputActions.Enable();
        _launchBallAction.performed += OnLaunchBall;
        ActiveCount++;
    }

    void OnDisable()
    {
        PowerUp.OnPowerUpCollected -= HandlePowerUpCollected;
        _launchBallAction.performed -= OnLaunchBall;
        _inputActions.Disable();
        ActiveCount--;
    }

    void HandlePowerUpCollected(PowerUpData data)
    {
        Debug.Log($"Paddle received power-up: {data.powerUpName}");

        switch (data.powerUpName)
        {
            case "SlowBall":
                _speed = _slowBallSpeed;
                break;

            case "FastBall":
                _speed = _fastBallSpeed;
                break;

            case "ThroughBall":
                _throughBall = true;
                break;
            case "DuplicateBall":
                DuplicateBall();
                break;
        }
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
            if (deflector != null && !_throughBall)
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
        if (deflector != null )
        {
            if (other.gameObject.CompareTag("Brick") && _throughBall) return;

            _direction = deflector.GetDeflection(transform.position, _direction).normalized;
        }
    }

    Vector2 ClampLaunchDirection(Vector2 dir)
    {
        // Convert direction to angle relative to +X axis
        float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;

        // Clamp angle to limits
        angle = Mathf.Clamp(angle, _minLaunchAngle, _maxLaunchAngle);

        // Convert back to a direction vector
        return new Vector2(Mathf.Cos(angle * Mathf.Deg2Rad), Mathf.Sin(angle * Mathf.Deg2Rad)).normalized;
    }

    void DuplicateBall()
    {
        // Safety: only split if the ball is active and a prefab reference exists
        GameObject ballPrefab = gameObject; // Assuming this script is on the prefab instance
        if (!_isActivated || ballPrefab == null) return;

        Vector3 spawnOffset = new Vector3(0.2f, 0.2f, 0f);
        GameObject newBallObj = Instantiate(ballPrefab, transform.position + spawnOffset, Quaternion.identity);

        Ball newBall = newBallObj.GetComponent<Ball>();

        if (newBall != null)
        {
            Vector2 oppositeDirection = new Vector2(-_direction.x, _direction.y).normalized;

            newBall._direction = oppositeDirection;
            newBall._isActivated = true; // launch immediately
            newBall.transform.SetParent(null);

            newBall._speed = _speed;
            newBall._throughBall = _throughBall;
        }

        Debug.Log("SplitBall: Created new ball with opposite trajectory.");
    }
}
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerMover : MonoBehaviour, IDeflector
{
    [SerializeField] enum ControlMode
    {
        WD,
        Mouse,
        Touch
    }

    [SerializeField] private ControlMode _controlMode = ControlMode.WD;
    [SerializeField] float _maxBounceAngle = 75f;

    [Header("Movement Settings")]
    [SerializeField] private float _moveSpeed = 5f;

    [Header("Horizontal Bounds")]
    [SerializeField] private float _minX = -2.3f;
    [SerializeField] private float _maxX = 2.3f;

    Camera _mainCamera;
    bool _isDragging = false;
    bool _isActivated = false;

    //Input
    InputActions _inputActions;
    InputAction _moveAction;
    InputAction _mouseAction;
    InputAction _touchAction;
    InputAction _launchBallAction;

    void Awake()
    {
        _inputActions = new InputActions();
    
        _mainCamera = Camera.main;

        _moveAction = _inputActions.Player.Move;
        _mouseAction = _inputActions.Player.MouseMove;
        _touchAction = _inputActions.Player.TouchMove;
        _launchBallAction = _inputActions.Player.LaunchBall;
    }

    void Update()
    {
        switch (_controlMode)
        {
            case ControlMode.WD:
            MoveWithKeys();
            break;
            case ControlMode.Mouse:
                MoveWithMouse();
                break;
            case ControlMode.Touch:
                MoveWithTouch();
                break;
        }

        // Clamp position
        Vector2 clampedPosition = transform.position;
        clampedPosition.x = Mathf.Clamp(clampedPosition.x, _minX, _maxX);
        transform.position = clampedPosition;
    }

    void OnEnable()
    {
        _inputActions.Enable();
        _launchBallAction.performed += OnLaunchBall;
    }

    void OnDisable()
    {
        _inputActions.Disable();
        _launchBallAction.performed -= OnLaunchBall;
    }

    void OnLaunchBall(InputAction.CallbackContext context)
    {
        Vector3 screenPos = Camera.main.WorldToScreenPoint(transform.position);
        Mouse.current.WarpCursorPosition(screenPos);
        _isActivated = true;
    }

    void MoveWithKeys()
    {
        if (_isActivated)
        {
            Vector2 moveInput = _moveAction.ReadValue<Vector2>();
            Vector2 movement = new Vector2(moveInput.x, 0f);
            transform.Translate(movement * _moveSpeed * Time.deltaTime);
        }
    }

    void MoveWithMouse()
    {
        if (_isActivated)
        {
            Vector2 mouseScreenPos = _mouseAction.ReadValue<Vector2>();
            Vector3 worldMousePos = _mainCamera.ScreenToWorldPoint(new Vector3(mouseScreenPos.x, mouseScreenPos.y, 0f));
            Vector3 newPos = new Vector3(worldMousePos.x, transform.position.y, transform.position.z);

            transform.position = Vector3.Lerp(transform.position, newPos, _moveSpeed * Time.deltaTime);
        }
    }

    void MoveWithTouch()
    {
        // Check if there's a touchscreen device active
        if (Touchscreen.current == null)
            return;

        // Check if the player is currently pressing the screen
        if (Touchscreen.current.primaryTouch.press.isPressed)
        {
            Vector2 touchPos = _touchAction.ReadValue<Vector2>();
            Vector3 worldTouchPos = _mainCamera.ScreenToWorldPoint(new Vector3(touchPos.x, touchPos.y, 0f));

            // Optional: detect drag start by checking collider
            if (!_isDragging)
            {
                Collider2D hit = Physics2D.OverlapPoint(worldTouchPos);
                if (hit != null && hit.transform == transform)
                    _isDragging = true;
            }

            // If dragging, move with the finger
            if (_isDragging)
            {
                Vector3 newPos = new Vector3(worldTouchPos.x, transform.position.y, transform.position.z);
                transform.position = Vector3.Lerp(transform.position, newPos, _moveSpeed * Time.deltaTime);
            }
        }
        else
        {
            _isDragging = false;
        }
    }

    public Vector2 GetDeflection(Vector2 ballPosition, Vector2 ballDirection)
    {
        float paddleWidth = GetComponent<SpriteRenderer>().bounds.size.x;
        float relativeHit = (ballPosition.x - transform.position.x) / (paddleWidth / 2);
        relativeHit = Mathf.Clamp(relativeHit, -1f, 1f);

        float bounceAngle = relativeHit * _maxBounceAngle * Mathf.Deg2Rad;

        Vector2 newDirection = new Vector2(Mathf.Sin(bounceAngle), Mathf.Cos(bounceAngle));
        return newDirection.normalized;
    }
}
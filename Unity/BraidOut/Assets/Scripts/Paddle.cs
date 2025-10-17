using UnityEngine;

public class PlayerMover : MonoBehaviour, IDeflector
{
    public enum ControlMode
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

    void Awake()
    {
        _mainCamera = Camera.main;
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

    void MoveWithKeys()
    {
        float horizontalInput = Input.GetAxisRaw("Horizontal");
        Vector2 movement = new Vector2(horizontalInput, 0f);
        transform.Translate(movement * _moveSpeed * Time.deltaTime);
    }

    void MoveWithMouse()
    {
        Vector3 mousePosition = _mainCamera.ScreenToWorldPoint(Input.mousePosition);
        Vector3 newPos = new Vector3(mousePosition.x, transform.position.y, transform.position.z);
        transform.position = Vector3.Lerp(transform.position, newPos, _moveSpeed * Time.deltaTime);
    }

    void MoveWithTouch()
    {
#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0))
        {
            Vector3 worldTouchPos = _mainCamera.ScreenToWorldPoint(Input.mousePosition);
            Vector2 touchWorld2D = new Vector2(worldTouchPos.x, worldTouchPos.y);

            Collider2D hit = Physics2D.OverlapPoint(touchWorld2D);
            if (hit != null && hit.transform == transform)
            {
                _isDragging = true;
            }
        }

        if (Input.GetMouseButton(0) && _isDragging)
        {
            Vector3 worldTouchPos = _mainCamera.ScreenToWorldPoint(Input.mousePosition);
            Vector3 newPos = new Vector3(worldTouchPos.x, transform.position.y, transform.position.z);
            transform.position = Vector3.Lerp(transform.position, newPos, _moveSpeed * Time.deltaTime);
        }

        if (Input.GetMouseButtonUp(0))
        {
            _isDragging = false;
        }
#else
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            Vector3 worldTouchPos = _mainCamera.ScreenToWorldPoint(touch.position);
            Vector2 touchWorld2D = new Vector2(worldTouchPos.x, worldTouchPos.y);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    Collider2D hit = Physics2D.OverlapPoint(touchWorld2D);
                    if (hit != null && hit.transform == transform)
                    {
                        _isDragging = true;
                    }
                    break;

                case TouchPhase.Moved:
                case TouchPhase.Stationary:
                    if (_isDragging)
                    {
                        Vector3 newPos = new Vector3(worldTouchPos.x, transform.position.y, transform.position.z);
                        transform.position = Vector3.Lerp(transform.position, newPos, _moveSpeed * Time.deltaTime);
                    }
                    break;

                case TouchPhase.Ended:
                case TouchPhase.Canceled:
                    _isDragging = false;
                    break;
            }
        }
#endif
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
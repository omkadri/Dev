using UnityEngine;

public class Ball : MonoBehaviour
{
    [SerializeField] float _speed = 40f;
    [SerializeField] Vector2 _direction = new Vector2(1f, 1f); // Initial direction
    [SerializeField] bool _isActivated = false;

    void Start()
    {
        _direction = _direction.normalized;
    }

    void Update()
    {
        if (!_isActivated)
        {
            if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonUp(0))
            {
                transform.SetParent(null); // Detach from paddle
                _isActivated = true;
            }
        }
    }

    void FixedUpdate()
    {
        if (_isActivated)
        {
            float distance = _speed * Time.fixedDeltaTime;
            Vector2 currentPosition = transform.position;

            // Check for a collision in the direction of movement
            RaycastHit2D hit = Physics2D.Raycast(currentPosition, _direction, distance);

            if (hit.collider != null)
            {
                // Move the ball to the point of collision
                transform.position = hit.point;

                // Check if the object hit implements IDeflector
                IDeflector deflector = hit.collider.GetComponent<IDeflector>();
                if (deflector != null)
                {
                    _direction = deflector.GetDeflection(transform.position, _direction).normalized;
                }

                // Optional: Slightly nudge forward to avoid getting stuck at the hit point
                transform.position += (Vector3)(_direction * (_speed * 0.01f));
            }
            else
            {
                // No collision detected, move normally
                Vector3 movement = (Vector3)(_direction * distance);
                transform.position += movement;
            }
        }
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        IDeflector deflector = other.GetComponent<IDeflector>();
        if (deflector != null)
        {
            _direction = deflector.GetDeflection(transform.position, _direction);
        }

    }
}
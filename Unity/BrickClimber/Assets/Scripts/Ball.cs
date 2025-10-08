using UnityEngine;

public class Ball : MonoBehaviour
{
    [SerializeField] float _speed = 5f;
    [SerializeField] Vector2 _direction = new Vector2(1f, 1f); // Initial direction

    private void Start()
    {
        _direction = _direction.normalized;
    }

    private void Update()
    {
        Vector3 movement = (Vector3)(_direction * _speed * Time.deltaTime); //TODO: Understand why we cast
        transform.position += movement;

        Vector3 pos = transform.position;
        transform.position = pos;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        IDeflector deflector = other.GetComponent<IDeflector>();
        if (deflector != null)
        {
            _direction = deflector.GetDeflection(transform.position, _direction);
        }

        //TODO: Powerups????
    }
}
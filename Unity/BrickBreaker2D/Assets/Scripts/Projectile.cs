using UnityEngine;

public class Projectile : MonoBehaviour
{
    [SerializeField] float _speed = 5f;

    void Update()
    {
        transform.Translate(Vector2.up * _speed * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Wall") || collision.CompareTag("Brick"))
        {
            Destroy(gameObject);
        }
    }
}
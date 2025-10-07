using UnityEngine;

public class BallController : MonoBehaviour
{
    public float speed = 5f;
    public Vector2 direction = new Vector2(1f, 1f); // Initial direction
    public float minX = -8f, maxX = 8f;
    public float minY = -4.5f, maxY = 4.5f;

    private void Start()
    {
        // Normalize direction to ensure consistent speed
        direction = direction.normalized;
    }

    private void Update()
    {
        // Move the ball in the given direction at constant speed
        Vector3 movement = (Vector3)(direction * speed * Time.deltaTime);
        transform.position += movement;

        // Check for wall collisions and bounce (invert direction)
        Vector3 pos = transform.position;

        // Left or right bounds
        if (pos.x <= minX || pos.x >= maxX)
        {
            direction.x *= -1f;
            pos.x = Mathf.Clamp(pos.x, minX, maxX); // Keep inside bounds
        }

        // Top or bottom bounds
        if (pos.y <= minY || pos.y >= maxY)
        {
            direction.y *= -1f;
            pos.y = Mathf.Clamp(pos.y, minY, maxY);
        }

        // Apply corrected position
        transform.position = pos;
    }
}
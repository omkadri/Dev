using UnityEngine;

public class Trampoline : MonoBehaviour
{
    public float bounceForce = 10f; // Adjust this value to control the bounce strength
    public bool reverseDirection = false; // Exposed bool to reverse the bounce direction

    void OnTriggerEnter2D(Collider2D other)
    {
        // Check if the object is the ball (you can also use tags)
        if (other.CompareTag("Ball"))
        {
            Rigidbody2D rb = other.GetComponent<Rigidbody2D>();
            if (rb != null)
            {
                // Get the incoming velocity
                Vector2 incomingVelocity = rb.velocity;

                // Get the trampoline's up direction
                Vector2 trampolineNormal = transform.up; // This is the normal direction of the trampoline

                // Calculate the reflection
                Vector2 bounceDirection = Vector2.Reflect(incomingVelocity, trampolineNormal);

                // Calculate the angle to rotate the bounce direction by half
                float angle = Vector2.SignedAngle(incomingVelocity, trampolineNormal);
                float halfAngle = angle / 2;

                // Rotate the bounce direction by half the angle
                bounceDirection = Quaternion.Euler(0, 0, halfAngle) * bounceDirection;

                // Reverse the direction if the bool is true
                if (reverseDirection)
                {
                    bounceDirection = -bounceDirection; // Reverse the bounce direction
                }

                // Apply the bounce force in the modified direction
                rb.velocity = bounceDirection.normalized * bounceForce; // Scale to the desired bounce force
            }
        }
    }
}
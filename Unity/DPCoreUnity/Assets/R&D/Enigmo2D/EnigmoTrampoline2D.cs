using UnityEngine;

public class EnigmoTrampoline2D : MonoBehaviour
{
    public float bounceForce = 10f;
    public bool reverseDir = false;


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Ball"))
        {
            Rigidbody2D rb2D = other.GetComponent<Rigidbody2D>();
            if (rb2D != null)
            {
                Vector2 incomingVelocity = rb2D.linearVelocity;
                Vector2 trampolineNormal = transform.up;
                Vector2 bounceDir = Vector2.Reflect(incomingVelocity, trampolineNormal);
                
                float angle = Vector2.SignedAngle(incomingVelocity, trampolineNormal);
                float halfAngle = angle / 2;

                bounceDir = Quaternion.Euler(0, 0, halfAngle) * bounceDir;

                if (reverseDir)
                {
                    bounceDir = -bounceDir;
                }

                rb2D.linearVelocity = bounceDir.normalized * bounceForce;
            }
        }
    }
}
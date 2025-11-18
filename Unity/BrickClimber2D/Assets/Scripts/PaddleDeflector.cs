using UnityEngine;

public class PaddleDeflector : MonoBehaviour, IDeflector
{
    [SerializeField] float _maxBounceAngle = 75f;

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
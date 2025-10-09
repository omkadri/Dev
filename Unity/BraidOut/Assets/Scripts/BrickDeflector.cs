using UnityEngine;

public class BrickDeflector : MonoBehaviour, IDeflector
{
    private Collider2D _collider;

    void Awake()
    {
        _collider = GetComponent<Collider2D>();
    }

    public Vector2 GetDeflection(Vector2 ballPosition, Vector2 ballDirection)
    {
        Vector2 closestPoint = _collider.ClosestPoint(ballPosition);

        Vector2 normal = (ballPosition - closestPoint).normalized;

        Vector2 reflected = Vector2.Reflect(ballDirection.normalized, normal);

        return reflected.normalized;
    }
}
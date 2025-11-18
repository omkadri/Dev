using UnityEngine;

public class WallDeflector : MonoBehaviour, IDeflector
{
    [SerializeField] bool _reflectX = true;
    [SerializeField] bool _reflectY = false;

    public Vector2 GetDeflection(Vector2 ballPosition, Vector2 ballDirection)
    {
        if (_reflectX) ballDirection.x *= -1f;
        if (_reflectY) ballDirection.y *= -1f;
        return ballDirection.normalized;
    }
}
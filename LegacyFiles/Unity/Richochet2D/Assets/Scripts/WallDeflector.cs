using UnityEngine;

public class WallDeflector : MonoBehaviour, IDeflector
{
    [SerializeField] bool _reflectX = true;
    [SerializeField] bool _reflectY = false;
    
    [SerializeField] float _horizontalThreshold = 0.01f;
    [SerializeField] float _verticalNudge = 0.2f;

    public Vector2 GetDeflection(Vector2 ballPosition, Vector2 ballDirection)
    {
        if (_reflectX) ballDirection.x *= -1f;
        if (_reflectY) ballDirection.y *= -1f;

        if (Mathf.Abs(ballDirection.y) < _horizontalThreshold)
        {
            float xSign = Mathf.Sign(ballDirection.x);
            if (xSign == 0f)
                xSign = 1f;

            ballDirection.y = _verticalNudge * xSign;
        }

        return ballDirection.normalized;
    }
}
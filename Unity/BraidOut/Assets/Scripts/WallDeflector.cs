using UnityEngine;

public class WallDeflector : MonoBehaviour, IDeflector
{
    [SerializeField] bool _reflectX = true;
    [SerializeField] bool _reflectY = false;

    [SerializeField, Range(0f, 45f)] float _minAngleFromHorizontal = 10f; // degrees

    public Vector2 GetDeflection(Vector2 ballPosition, Vector2 ballDirection)
    {
        ballDirection.Normalize();

        // Reflect horizontally or vertically
        if (_reflectX)
            ballDirection.x *= -1f;
        if (_reflectY)
            ballDirection.y *= -1f;

        // --- Apply buffer ONLY for horizontal walls (top/bottom) ---
        if (_reflectY)
        {
            float angleFromVertical = Mathf.Abs(Vector2.Angle(ballDirection, Vector2.up));

            // If the bounce is too flat (almost horizontal), adjust it
            if (angleFromVertical < _minAngleFromHorizontal)
            {
                // Preserve horizontal direction
                float xSign = Mathf.Sign(ballDirection.x);
                if (xSign == 0f) xSign = Random.value > 0.5f ? 1f : -1f;

                // Calculate minimum safe deflection
                float radians = (90f - _minAngleFromHorizontal) * Mathf.Deg2Rad;

                // Build new direction
                ballDirection = new Vector2(
                    Mathf.Cos(radians) * xSign,
                    Mathf.Sign(ballDirection.y) * Mathf.Sin(radians)
                );
            }
        }

        return ballDirection.normalized;
    }
}
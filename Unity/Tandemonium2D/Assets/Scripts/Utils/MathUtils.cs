using UnityEngine;

public static class MathUtils
{
    // Calculate the distance between two Vector3 points
    public static float CalculateDistance(Vector3 pointA, Vector3 pointB)
    {
        return Vector3.Distance(pointA, pointB);
    }

    // Calculate the squared distance between two Vector3 points (faster than CalculateDistance if you don't need the exact value)
    public static float CalculateSquaredDistance(Vector3 pointA, Vector3 pointB)
    {
        return (pointA - pointB).sqrMagnitude;
    }

    // Calculate the distance between two Vector2 points
    public static float CalculateDistance(Vector2 pointA, Vector2 pointB)
    {
        return Vector2.Distance(pointA, pointB);
    }

    // Calculate the squared distance between two Vector2 points (faster than CalculateDistance if you don't need the exact value)
    public static float CalculateSquaredDistance(Vector2 pointA, Vector2 pointB)
    {
        return (pointA - pointB).sqrMagnitude;
    }

    // Linearly interpolate between two values based on a t value (0 to 1)
    public static float Lerp(float start, float end, float t)
    {
        return Mathf.Lerp(start, end, Mathf.Clamp01(t));
    }

    // Clamp a value between a min and max
    public static float Clamp(float value, float min, float max)
    {
        return Mathf.Clamp(value, min, max);
    }

    // Remap a value from one range to another
    public static float Remap(float value, float fromMin, float fromMax, float toMin, float toMax)
    {
        return toMin + (value - fromMin) * (toMax - toMin) / (fromMax - fromMin);
    }

    // Smoothly interpolate between two values (ease-in, ease-out)
    public static float SmoothStep(float start, float end, float t)
    {
        t = Mathf.Clamp01(t);
        t = t * t * (3f - 2f * t); // SmoothStep formula
        return Mathf.Lerp(start, end, t);
    }

    // Get a random point inside a unit circle (2D)
    public static Vector2 RandomPointInCircle(float radius = 1f)
    {
        return Random.insideUnitCircle * radius;
    }

    // Get a random point inside a unit sphere (3D)
    public static Vector3 RandomPointInSphere(float radius = 1f)
    {
        return Random.insideUnitSphere * radius;
    }

    // Get the angle between two vectors in degrees
    public static float AngleBetweenVectors(Vector3 vectorA, Vector3 vectorB)
    {
        return Mathf.Acos(Vector3.Dot(vectorA.normalized, vectorB.normalized)) * Mathf.Rad2Deg;
    }

    // Check if a value is approximately equal to another value (useful for float comparisons)
    public static bool Approximately(float a, float b, float tolerance = 0.0001f)
    {
        return Mathf.Abs(a - b) < tolerance;
    }

    // Get the sign of a value (1 for positive, -1 for negative)
    public static int Sign(float value)
    {
        return value > 0f ? 1 : (value < 0f ? -1 : 0);
    }

    // Normalize a vector (get a vector pointing in the same direction but with magnitude 1)
    public static Vector3 Normalize(Vector3 vector)
    {
        return vector.normalized;
    }

    // Get the angle between two points in 2D space (useful for rotating objects)
    public static float AngleBetweenPoints(Vector2 pointA, Vector2 pointB)
    {
        return Mathf.Atan2(pointB.y - pointA.y, pointB.x - pointA.x) * Mathf.Rad2Deg;
    }

    // Convert degrees to radians
    public static float DegreesToRadians(float degrees)
    {
        return degrees * Mathf.Deg2Rad;
    }

    // Convert radians to degrees
    public static float RadiansToDegrees(float radians)
    {
        return radians * Mathf.Rad2Deg;
    }

    // Perform a 2D vector rotation by a given angle in degrees
    public static Vector2 RotateVector(Vector2 vector, float angleDegrees)
    {
        float angleRadians = DegreesToRadians(angleDegrees);
        float cosAngle = Mathf.Cos(angleRadians);
        float sinAngle = Mathf.Sin(angleRadians);
        return new Vector2(cosAngle * vector.x - sinAngle * vector.y, sinAngle * vector.x + cosAngle * vector.y);
    }
}

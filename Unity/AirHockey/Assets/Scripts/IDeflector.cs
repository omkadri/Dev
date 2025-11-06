using UnityEngine;

public interface IDeflector
{
    Vector2 GetDeflection(Vector2 ballPosition, Vector2 ballDirection);
}
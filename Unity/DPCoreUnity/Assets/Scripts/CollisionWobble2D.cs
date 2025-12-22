using System.Collections;
using UnityEngine;

public class CollisionWobble2D : MonoBehaviour
{
    public enum WobbleOrigin
    {
        Center,
        Top,
        Bottom,
        Left,
        Right
    }

    [Header("Wobble Settings")]
    public float _wobbleStrength = 10f;
    public float _wobbleDuration = 0.5f;
    public float _wobbleSpeed = 20f;
    public WobbleOrigin _wobbleOrigin = WobbleOrigin.Bottom;

    bool _isWobbling = false;
    Quaternion _startRotation;

    void OnTriggerEnter2D(Collider2D other)
    {
        if (!_isWobbling)
        {
            StartCoroutine(Wobble());
        }
    }

    IEnumerator Wobble()
    {
        _isWobbling = true;
        _startRotation = transform.rotation;

        float elapsed = 0f;

        while (elapsed < _wobbleDuration)
        {
            float angle = Mathf.Sin(elapsed * _wobbleSpeed) * _wobbleStrength;

            transform.rotation = _startRotation;

            transform.Rotate(Vector3.forward, angle);

            elapsed += Time.deltaTime;
            yield return null;
        }

        transform.rotation = _startRotation;
        _isWobbling = false;
    }

    Vector3 GetPivotPoint()
    {
        Bounds bounds = GetComponent<Collider2D>().bounds;

        switch (_wobbleOrigin)
        {
            case WobbleOrigin.Top:
                return new Vector3(bounds.center.x, bounds.max.y, transform.position.z);
            case WobbleOrigin.Bottom:
                return new Vector3(bounds.center.x, bounds.min.y, transform.position.z);
            case WobbleOrigin.Left:
                return new Vector3(bounds.min.x, bounds.center.y, transform.position.z);
            case WobbleOrigin.Right:
                return new Vector3(bounds.max.x, bounds.center.y, transform.position.z);
            default:
                return bounds.center;
        }
    }
}
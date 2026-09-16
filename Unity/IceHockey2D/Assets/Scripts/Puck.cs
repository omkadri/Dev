using UnityEngine;

public class Puck : MonoBehaviour
{
    [SerializeField] Rigidbody2D _rigidbody;
    [SerializeField] Collider2D _collider;
    [SerializeField] TrailRenderer _trailRenderer;

    public void Acquire(Transform holdPoint)
    {
        _rigidbody.simulated = false;
        _collider.enabled = false;
        _trailRenderer.enabled = false;

        transform.SetParent(holdPoint);
        transform.localPosition = Vector3.zero;
    }

    public void Release(Vector2 velocity)
    {
        transform.SetParent(null);

        _collider.enabled = true;
        _rigidbody.simulated = true;
        _trailRenderer.enabled = true;
        _rigidbody.linearVelocity = velocity;
    }
}
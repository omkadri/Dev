using UnityEngine;

public class PuckHandler : MonoBehaviour
{
    [SerializeField] Transform _puckHoldPoint;

    Puck _puck;
    bool _canAcquire = true;

    public bool HasPossession => _puck != null;

    void OnTriggerEnter2D(Collider2D other)
    {
        if (!_canAcquire) return;

        Puck puck = other.GetComponent<Puck>();

        if (puck == null) return;

        Acquire(puck);
    }

    public void Acquire(Puck puck)
    {
        if (HasPossession) return;

        _puck = puck;
        _puck.Acquire(_puckHoldPoint);
    }

    public void LosePossession(Vector2 velocity)
    {
        if (!HasPossession) return;

        Puck puck = _puck;
        _puck = null;

        _canAcquire = false;

        puck.Release(velocity);

        Invoke(nameof(EnableAcquisition), 0.1f);
    }

    void EnableAcquisition()
    {
        _canAcquire = true;
    }
}
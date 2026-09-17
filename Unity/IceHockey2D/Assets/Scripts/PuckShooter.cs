using UnityEngine;

public class PuckShooter : MonoBehaviour
{
    [SerializeField] InputReader _inputReader;
    [SerializeField] PuckHandler _puckHandler;
    [SerializeField] Transform _puckHoldPoint;
    [SerializeField] Transform _mouseCursor;
    [SerializeField] float _shotSpeed = 10f;

    void OnEnable()
    {
        _inputReader.ShootEvent += OnShoot;
    }

    void OnDisable()
    {
        _inputReader.ShootEvent -= OnShoot;
    }

    void OnShoot()
    {
        Shoot();
    }

    void Shoot()
    {
        if (!_puckHandler.HasPossession) return;

        Vector2 direction = ((Vector2)_mouseCursor.position - (Vector2)_puckHoldPoint.position).normalized; //casting converts vector3 into vector2

        _puckHandler.LosePossession(direction * _shotSpeed);
    }
}
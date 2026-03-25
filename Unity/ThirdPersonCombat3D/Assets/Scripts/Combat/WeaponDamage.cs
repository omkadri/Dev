using System.Collections.Generic;
using UnityEngine;

public class WeaponDamage : MonoBehaviour
{
    [SerializeField] Collider _playerCollider;

    List<Collider> _alreadyCollidedWith = new List<Collider>();//TODO: find better naming

    void OnEnable()
    {
        _alreadyCollidedWith.Clear();
    }

    void OnTriggerEnter(Collider other)
    {
        if (other == _playerCollider) { return; }

        if (_alreadyCollidedWith.Contains(other)) { return; }

        _alreadyCollidedWith.Add(other);

        if (other.TryGetComponent<Health>(out Health health))
        {
            health.DealDamage(10);
        }
    }
}
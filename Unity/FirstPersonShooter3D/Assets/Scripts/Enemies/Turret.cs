using System.Collections;
using UnityEngine;

public class Turret : MonoBehaviour
{
    [SerializeField] GameObject _projectilePrefab;
    [SerializeField] Transform _turretHead;
    [SerializeField] Transform _target;
    [SerializeField] Transform _projectileSpawnPoint;
    [SerializeField] float _fireRate = 2f;
    [SerializeField] int _damage = 2;

    PlayerHealth _player;

    void Start()
    {
        _player = FindFirstObjectByType<PlayerHealth>();
        StartCoroutine(FireRoutine());
    }

    void Update()
    {
        _turretHead.LookAt(_target);
    }

    IEnumerator FireRoutine()
    {
        while(_player) 
        {
            yield return new WaitForSeconds(_fireRate);
            Projectile newProjectile = Instantiate(_projectilePrefab, _projectileSpawnPoint.position, Quaternion.identity).GetComponent<Projectile>();
            newProjectile.transform.LookAt(_target);
            newProjectile.Init(_damage);
        }
    }
}

using System.Collections;
using UnityEditor.EditorTools;
using UnityEngine;

public class Shooter : MonoBehaviour, IEnemy
{
    [SerializeField] GameObject _projectilePrefab;
    [SerializeField] float _projectileMoveSpeed;
    [SerializeField] int _burstCount;
    [SerializeField] int _projectilesPerBurst;
    [SerializeField] [Range(0, 359)] float _angleSpread;
    [SerializeField] float _startingDistance = 0.1f;
    [SerializeField] float _timeBetweenBursts;
    [SerializeField] float _restTime = 1f;
    [SerializeField] bool _oscillate;
    [Tooltip("Oscillate must be enabled for stagger to work properly.")]
    [SerializeField] bool _stagger;
    

    bool _isShooting = false;


    void OnValidate() //We use this to prevent serialized properties from having invalid values.
    {
        if (!_oscillate) { _stagger = false; } //TODO: investigate not being able to turn on stagger independently
        if (_projectilesPerBurst < 1) { _projectilesPerBurst = 1; }
        if (_burstCount < 1) { _burstCount = 1; }
        if (_timeBetweenBursts < 0.1f) { _timeBetweenBursts = 0.1f; }
        if (_restTime < 0.1f) { _restTime = 0.1f; }
        if (_startingDistance < 0.1f) { _startingDistance = 0.1f; }
        if (_angleSpread == 0) { _projectilesPerBurst = 1; }
        if (_projectileMoveSpeed <= 0) { _projectileMoveSpeed = 0.1f; }

    }


    public void Attack()
    {
        if (!_isShooting)
        {
            StartCoroutine(ShootRoutine());
        }
    }


    IEnumerator ShootRoutine()
    {
        _isShooting = true;

        float startAngle, currentAngle, angleStep, endAngle;
        float timeBetweenProjectiles = 0f;

        TargetConeOfInfluence(out startAngle, out currentAngle, out angleStep, out endAngle);

        if (_stagger)
        {
            timeBetweenProjectiles = _timeBetweenBursts / _projectilesPerBurst;
        }

        for (int i = 0; i < _burstCount; i++)
        {
            if (!_oscillate)
            {
                TargetConeOfInfluence(out startAngle, out currentAngle, out angleStep, out endAngle);
            }

            if (_oscillate && i % 2 != 1)//TODO: Learn and understand the modulus operator
            {
                TargetConeOfInfluence(out startAngle, out currentAngle, out angleStep, out endAngle);
            }
            else if (_oscillate)
            {
                currentAngle = endAngle;
                endAngle = startAngle;
                startAngle = currentAngle;
                angleStep *= -1;
            }

            for (int j = 0; j < _projectilesPerBurst; j++)
            {
                Vector2 pos = FindProjectileSpawnPos(currentAngle);

                GameObject newProjectile = Instantiate(_projectilePrefab, pos, Quaternion.identity);
                newProjectile.transform.right = newProjectile.transform.position - transform.position;

                if (newProjectile.TryGetComponent(out Projectile projectile))//TODO: research and understand TryGetComponent() 
                {
                    projectile.UpdateMoveSpeed(_projectileMoveSpeed);
                }

                currentAngle += angleStep;

                if (_stagger)
                {
                    yield return new WaitForSeconds(timeBetweenProjectiles);
                }
            }

            currentAngle = startAngle;

            if (!_stagger)
            {
                yield return new WaitForSeconds(_timeBetweenBursts);
            }
        }

        yield return new WaitForSeconds(_restTime);
        _isShooting = false;
    }


    void TargetConeOfInfluence(out float startAngle, out float currentAngle, out float angleStep, out float endAngle)
    {
        Vector2 targetDir = PlayerController.Instance.transform.position - transform.position;
        //TODO: understand the use of triggonmetry for cone of influence
        float targetAngle = Mathf.Atan2(targetDir.y, targetDir.x) * Mathf.Rad2Deg;
        startAngle = targetAngle;
        endAngle = targetAngle;
        currentAngle = targetAngle;
        float halfAngleSpread = 0f;
        angleStep = 0f;
        if (_angleSpread != 0)
        {
            angleStep = _angleSpread / (_projectilesPerBurst - 1);
            halfAngleSpread = _angleSpread / 2f;
            startAngle = targetAngle - halfAngleSpread;
            endAngle = targetAngle + halfAngleSpread;
            currentAngle = startAngle;
        }
    }


    Vector2 FindProjectileSpawnPos(float currentAngle)
    {
        float x = transform.position.x + _startingDistance * Mathf.Cos(currentAngle * Mathf.Deg2Rad);
        float y = transform.position.y + _startingDistance * Mathf.Sin(currentAngle * Mathf.Deg2Rad);
        Vector2 pos = new Vector2(x, y);

        return pos;
    }
}
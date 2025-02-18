using System.Collections;
using UnityEngine;

public class GDTVTopDown2DShooter : MonoBehaviour, GDTVTopDown2DIEnemy
{
    [SerializeField] GameObject projectilePrefab;
    [SerializeField] float projectileMoveSpeed;
    [SerializeField] int burstCount;
    [SerializeField] int projectilesPerBurst;
    [SerializeField] [Range( 0, 359 )] float angleSpread;
    [SerializeField] float startingDistance = 0.1f;
    [SerializeField] float timeBetweenBursts;
    [SerializeField] float restTime = 1f;
    [SerializeField] bool stagger;
    [SerializeField] bool oscillate;

    bool isShooting = false;
    

    public void Attack()
    {
        if ( !isShooting )
        {
            StartCoroutine( ShootRoutine() );
        }
    }


    IEnumerator ShootRoutine()
    {
        isShooting = true;

        float startAngle, currentAngle, angleStep;
        float timeBetweenProjectiles = 0f;

        TargetConeOfInfluence(out startAngle, out currentAngle, out angleStep);

        if ( stagger )
        {
            timeBetweenProjectiles = timeBetweenBursts / projectilesPerBurst;
        }

        for (int i = 0; i < burstCount; i++)
        {
            for (int j = 0; j < projectilesPerBurst; j++)
            {
                Vector2 pos = FindProjectileSpawnPos(currentAngle);

                GameObject newProjectile = Instantiate(projectilePrefab, pos, Quaternion.identity);
                newProjectile.transform.right = newProjectile.transform.position - transform.position;

                if (newProjectile.TryGetComponent(out GDTVTopDown2DProjectile projectile))//TODO: research and understand TryGetComponent() 
                {
                    projectile.UpdateMoveSpeed(projectileMoveSpeed);
                }

                currentAngle += angleStep;

                if ( stagger )
                {
                    yield return new WaitForSeconds( timeBetweenProjectiles );
                }
            }

            currentAngle = startAngle;

            yield return new WaitForSeconds(timeBetweenBursts);
            TargetConeOfInfluence(out startAngle, out currentAngle, out angleStep);
        }

        yield return new WaitForSeconds(restTime);
        isShooting = false;
    }


    void TargetConeOfInfluence(out float startAngle, out float currentAngle, out float angleStep)
    {
        Vector2 targetDir = GDTVTopDown2DPlayerController.Instance.transform.position - transform.position;
        //TODO: understand the use of triggonmetry for cone of influence
        float targetAngle = Mathf.Atan2(targetDir.y, targetDir.x) * Mathf.Rad2Deg;
        startAngle = targetAngle;
        float endAngle = targetAngle;
        currentAngle = targetAngle;
        float halfAngleSpread = 0f;
        angleStep = 0f;
        if (angleSpread != 0)
        {
            angleStep = angleSpread / (projectilesPerBurst - 1);
            halfAngleSpread = angleSpread / 2f;
            startAngle = targetAngle - halfAngleSpread;
            endAngle = targetAngle + halfAngleSpread;
            currentAngle = startAngle;
        }
    }


    Vector2 FindProjectileSpawnPos( float currentAngle )
    {
        float x = transform.position.x + startingDistance * Mathf.Cos( currentAngle * Mathf.Deg2Rad );
        float y = transform.position.y + startingDistance * Mathf.Sin( currentAngle * Mathf.Deg2Rad );
        Vector2 pos = new Vector2( x, y );

        return pos;
    }
}
using System.Collections;
using UnityEditor.EditorTools;
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
    [SerializeField] bool oscillate;
    [Tooltip( "Oscillate must be enabled for stagger to work properly." )]
    [SerializeField] bool stagger;
    

    bool isShooting = false;


    void OnValidate() //We use this to prevent properties from having invalid values.
    {
        if ( !oscillate ) { stagger = false; } //TODO: investigate not being able to turn on stagger independently
        if ( projectilesPerBurst < 1 ) { projectilesPerBurst = 1; }
        if ( burstCount < 1 ) { burstCount = 1; }
        if ( timeBetweenBursts < 0.1f ) { timeBetweenBursts = 0.1f; }
        if ( restTime < 0.1f ) { restTime = 0.1f; }
        if ( startingDistance < 0.1f ) { startingDistance = 0.1f; }
        if ( angleSpread == 0 ) { projectilesPerBurst = 1; }
        if ( projectileMoveSpeed <= 0 ) { projectileMoveSpeed = 0.1f; }

    }


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

        float startAngle, currentAngle, angleStep, endAngle;
        float timeBetweenProjectiles = 0f;

        TargetConeOfInfluence( out startAngle, out currentAngle, out angleStep, out endAngle );

        if ( stagger )
        {
            timeBetweenProjectiles = timeBetweenBursts / projectilesPerBurst;
        }

        for ( int i = 0; i < burstCount; i++ )
        {
            if ( !oscillate )
            {
                TargetConeOfInfluence( out startAngle, out currentAngle, out angleStep, out endAngle );
            }

            if ( oscillate && i % 2 != 1 )//TODO: Learn and understand the modulus operator
            {
                TargetConeOfInfluence( out startAngle, out currentAngle, out angleStep, out endAngle );
            }
            else if ( oscillate )
            {
                currentAngle = endAngle;
                endAngle = startAngle;
                startAngle = currentAngle;
                angleStep *= -1;
            }

            for ( int j = 0; j < projectilesPerBurst; j++ )
            {
                Vector2 pos = FindProjectileSpawnPos( currentAngle );

                GameObject newProjectile = Instantiate( projectilePrefab, pos, Quaternion.identity );
                newProjectile.transform.right = newProjectile.transform.position - transform.position;

                if ( newProjectile.TryGetComponent( out GDTVTopDown2DProjectile projectile ) )//TODO: research and understand TryGetComponent() 
                {
                    projectile.UpdateMoveSpeed( projectileMoveSpeed );
                }

                currentAngle += angleStep;

                if ( stagger )
                {
                    yield return new WaitForSeconds( timeBetweenProjectiles );
                }
            }

            currentAngle = startAngle;

            if ( !stagger )
            {
                yield return new WaitForSeconds( timeBetweenBursts );
            }
        }

        yield return new WaitForSeconds( restTime );
        isShooting = false;
    }


    void TargetConeOfInfluence( out float startAngle, out float currentAngle, out float angleStep, out float endAngle )
    {
        Vector2 targetDir = GDTVTopDown2DPlayerController.Instance.transform.position - transform.position;
        //TODO: understand the use of triggonmetry for cone of influence
        float targetAngle = Mathf.Atan2( targetDir.y, targetDir.x ) * Mathf.Rad2Deg;
        startAngle = targetAngle;
        endAngle = targetAngle;
        currentAngle = targetAngle;
        float halfAngleSpread = 0f;
        angleStep = 0f;
        if ( angleSpread != 0 )
        {
            angleStep = angleSpread / ( projectilesPerBurst - 1 );
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
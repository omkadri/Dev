using System.Collections;
using UnityEngine;
using UnityEngine.UIElements;

public class GDTVTopDown2DShooter : MonoBehaviour, GDTVTopDown2DIEnemy
{
    [SerializeField] GameObject bulletPrefab;
    [SerializeField] float bulletMoveSpeed;
    [SerializeField] int burstCount;
    [SerializeField] float timeBetweenBursts;
    [SerializeField] float restTime = 1f;

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

        for ( int i = 0; i < burstCount; i++ )
        {
            Vector2 targetDir = GDTVTopDown2DPlayerController.Instance.transform.position - transform.position;

            GameObject newBullet = Instantiate( bulletPrefab, transform.position, Quaternion.identity );
            newBullet.transform.right = targetDir;

            if (newBullet.TryGetComponent( out GDTVTopDown2DProjectile projectile ) )//TODO: research and understand TryGetComponent() 
            {
                projectile.UpdateSpeed( bulletMoveSpeed );
            }

            yield return new WaitForSeconds( timeBetweenBursts );
        }

        yield return new WaitForSeconds( restTime );
        isShooting = false;
    }
}
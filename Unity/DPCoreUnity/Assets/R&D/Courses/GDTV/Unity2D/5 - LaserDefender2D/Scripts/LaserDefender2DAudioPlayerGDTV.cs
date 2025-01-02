using UnityEngine;

public class LaserDefender2DAudioPlayerGDTV : MonoBehaviour
{
    [Header( "Shooting SFX" )]
    [SerializeField] AudioClip playerShootingSFX;
    [SerializeField] [Range( 0f,1f )] float playerShootingVolume = 1f;
    [SerializeField] AudioClip enemyShootingSFX;
    [SerializeField] [Range( 0f,1f )] float enemyShootingVolume = 1f;
    

    [Header( "Damage SFX" )]
    [SerializeField] AudioClip playerDamageSFX;
    [SerializeField] [Range( 0f,1f )] float playerDamageVolume = 1f;
    [SerializeField] AudioClip playerDeathSFX;
    [SerializeField] [Range( 0f,1f )] float playerDeathVolume = 1f;
    [SerializeField] AudioClip enemyDamageSFX;
    [SerializeField] [Range( 0f,1f )] float enemyDamageVolume = 1f;


    public void PlayPlayerShootingSFX()
    {
        if( playerShootingSFX != null )
        {
            AudioSource.PlayClipAtPoint( playerShootingSFX, Camera.main.transform.position, playerShootingVolume );
        }
    }

    public void PlayEnemyShootingSFX()
    {
        if( enemyShootingSFX != null )
        {
            AudioSource.PlayClipAtPoint( enemyShootingSFX, Camera.main.transform.position, enemyShootingVolume );
        }
    }

    public void PlayPlayerDamageSFX()
    {
        if( playerDamageSFX != null )
        {
            AudioSource.PlayClipAtPoint( playerDamageSFX, Camera.main.transform.position, playerDamageVolume );
        }
    }

    public void PlayPlayerDeathSFX()
    {
        if( playerDeathSFX != null )
        {
            AudioSource.PlayClipAtPoint( playerDeathSFX, Camera.main.transform.position, playerDeathVolume );
        }
    }

    public void PlayEnemyDamageSFX()
    {
        if( enemyDamageSFX != null )
        {
            AudioSource.PlayClipAtPoint( enemyDamageSFX, Camera.main.transform.position, enemyDamageVolume );
        }
    }
}

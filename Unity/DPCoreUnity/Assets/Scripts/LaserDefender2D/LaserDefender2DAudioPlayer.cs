using UnityEngine;

public class LaserDefender2DAudioPlayer : MonoBehaviour
{
    [Header( "Shooting SFX" )]
    [SerializeField] AudioClip _playerShootingSFX;
    [SerializeField] [Range( 0f,1f )] float _playerShootingVolume = 1f;
    [SerializeField] AudioClip _enemyShootingSFX;
    [SerializeField] [Range( 0f,1f )] float _enemyShootingVolume = 1f;
    
    [Header( "Damage SFX" )]
    [SerializeField] AudioClip _playerDamageSFX;
    [SerializeField] [Range( 0f,1f )] float _playerDamageVolume = 1f;
    [SerializeField] AudioClip _playerDeathSFX;
    [SerializeField] [Range( 0f,1f )] float _playerDeathVolume = 1f;
    [SerializeField] AudioClip _enemyDamageSFX;
    [SerializeField] [Range( 0f,1f )] float _enemyDamageVolume = 1f;


    public void PlayPlayerShootingSFX()
    {
        if ( _playerShootingSFX != null )
        {
            AudioSource.PlayClipAtPoint( _playerShootingSFX, Camera.main.transform.position, _playerShootingVolume );
        }
    }


    public void PlayEnemyShootingSFX()
    {
        if ( _enemyShootingSFX != null )
        {
            AudioSource.PlayClipAtPoint( _enemyShootingSFX, Camera.main.transform.position, _enemyShootingVolume );
        }
    }


    public void PlayPlayerDamageSFX()
    {
        if ( _playerDamageSFX != null )
        {
            AudioSource.PlayClipAtPoint( _playerDamageSFX, Camera.main.transform.position, _playerDamageVolume );
        }
    }


    public void PlayPlayerDeathSFX()
    {
        if ( _playerDeathSFX != null )
        {
            AudioSource.PlayClipAtPoint( _playerDeathSFX, Camera.main.transform.position, _playerDeathVolume );
        }
    }


    public void PlayEnemyDamageSFX()
    {
        if ( _enemyDamageSFX != null )
        {
            AudioSource.PlayClipAtPoint( _enemyDamageSFX, Camera.main.transform.position, _enemyDamageVolume );
        }
    }
}
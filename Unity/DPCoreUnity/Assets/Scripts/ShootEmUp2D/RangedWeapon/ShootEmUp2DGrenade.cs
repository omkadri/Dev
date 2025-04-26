using UnityEngine;
using Unity.Cinemachine;
using System;

public class ShootEmUp2DGrenade : MonoBehaviour
{
    public Action OnGrenadeExplode; //we don't want a static action because there will be many instances of grenades. 

    [SerializeField] GameObject _explodeVFX;
    [SerializeField] float _launchForce = 15f;
    [SerializeField] float _torqueAmount = 0.5f;

    Rigidbody2D _rb2d;
    CinemachineImpulseSource _impulseSource;


    void OnEnable()
    {
        OnGrenadeExplode += GrenadeExplosion;
        OnGrenadeExplode += GrenadeScreenShake;
    }


    void OnDisable()
    {
        OnGrenadeExplode -= GrenadeExplosion;
        OnGrenadeExplode -= GrenadeScreenShake;
    }


    void Awake()
    {
        _rb2d = GetComponent<Rigidbody2D>();
        _impulseSource = GetComponent<CinemachineImpulseSource>();
    }


    void Start()
    {
        LaunchGrenade();
    }


    void OnCollisionEnter2D( Collision2D other )
    {
        if( other.gameObject.GetComponent<ShootEmUp2DEnemy>() )
        {
            OnGrenadeExplode?.Invoke();
        }
    }


    void LaunchGrenade()
    {
        Vector2 mousePos = Camera.main.ScreenToWorldPoint( Input.mousePosition ); //TODO: Investigate exactly what ScreenToWorldPoint does
        Vector2 dirToMouse = ( mousePos - (Vector2)transform.position ).normalized; //TODO: investigate vector2 casting and normalization
        _rb2d.AddForce( dirToMouse * _launchForce, ForceMode2D.Impulse );
        _rb2d.AddTorque( _torqueAmount, ForceMode2D.Impulse );
    }


    void GrenadeExplosion()
    {
        Instantiate( _explodeVFX, transform.position, Quaternion.identity );
        Destroy( gameObject );
    }


    void GrenadeScreenShake()
    {
        _impulseSource.GenerateImpulse();
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DProjectile : MonoBehaviour
{
    [SerializeField] GameObject _projectileHitVFX;
    [SerializeField] float _moveSpeed = 10f;
    [SerializeField] int _damageAmount = 1;
    [SerializeField] float _knockbackThrust = 20f;

    Vector2 _fireDir;
    Rigidbody2D _rb2d;
    ShootEmUp2DRangedWeapon _rangedWeapon;


    void Awake()
    {
        _rb2d = GetComponent<Rigidbody2D>();
    }


    void FixedUpdate()
    {
        _rb2d.linearVelocity = _fireDir * _moveSpeed;
    }


    public void Init( ShootEmUp2DRangedWeapon rangedWeapon, Vector2 projectileSpawnPos, Vector2 mousePos )
    {
        _rangedWeapon = rangedWeapon;
        transform.position = projectileSpawnPos;
        _fireDir = ( mousePos - projectileSpawnPos ).normalized;
    }


    void OnTriggerEnter2D( Collider2D other )
    {
        Instantiate( _projectileHitVFX, transform.position, Quaternion.identity );

        IHitable iHitable = other.gameObject.GetComponent<IHitable>();
        iHitable?.TakeHit();

        IDamageable iDamageable = other.gameObject.GetComponent<IDamageable>();
        iDamageable?.TakeDamage( _damageAmount, _knockbackThrust );

        _rangedWeapon.ReleaseProjectileFromPool( this );
    }
}
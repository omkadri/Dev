using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DProjectile : MonoBehaviour
{
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
        ShootEmUp2DHealth health = other.gameObject.GetComponent<ShootEmUp2DHealth>();
        health?.TakeDamage(_damageAmount);

        ShootEmUp2DKnockback knockback = other.gameObject.GetComponent<ShootEmUp2DKnockback>();
        knockback?.ActivateKnockback( ShootEmUp2DPlayerController.Instance.transform.position, _knockbackThrust );

        ShootEmUp2DDamageFlash damageFlash = other.gameObject.GetComponent<ShootEmUp2DDamageFlash>();
        damageFlash?.StartFlash(); //FUTURE LECTURE - This will all be turned into an interface.

        _rangedWeapon.ReleaseProjectileFromPool( this );
    }
}
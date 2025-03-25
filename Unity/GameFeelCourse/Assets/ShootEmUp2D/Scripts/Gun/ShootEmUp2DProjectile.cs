using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DProjectile : MonoBehaviour
{
    [SerializeField] float moveSpeed = 10f;
    [SerializeField] int damageAmount = 1;
    [SerializeField] float knockbackThrust = 20f;

    Vector2 fireDir;
    Rigidbody2D rb2d;
    ShootEmUp2DRangedWeapon rangedWeapon;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }


    void FixedUpdate()
    {
        rb2d.linearVelocity = fireDir * moveSpeed;
    }


    public void Init(ShootEmUp2DRangedWeapon weapon, Vector2 projectileSpawnPos, Vector2 mousePos)
    {
        rangedWeapon = weapon;
        transform.position = projectileSpawnPos;
        fireDir = ( mousePos - projectileSpawnPos ).normalized;
    }


    void OnTriggerEnter2D(Collider2D other) 
    {
        ShootEmUp2DHealth health = other.gameObject.GetComponent<ShootEmUp2DHealth>();
        health?.TakeDamage(damageAmount);

        ShootEmUp2DKnockback knockback = other.gameObject.GetComponent<ShootEmUp2DKnockback>();
        knockback?.ActivateKnockback( ShootEmUp2DPlayerController.Instance.transform.position, knockbackThrust );

        rangedWeapon.ReleaseProjectileFromPool( this );
    }
}
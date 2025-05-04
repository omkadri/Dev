 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ShootEmUp2DHealth : MonoBehaviour, IDamageable
{
    public GameObject SplatterPrefab => _splatterPrefab;//this is called an expression-bodied getter
    public GameObject DeathVFX => _deathVFX;

    public static Action<ShootEmUp2DHealth> OnDeath;//this passes the health class into the event
    
    [SerializeField] GameObject _splatterPrefab; //TODO: pick better name than splatterPrefab
    [SerializeField] GameObject _deathVFX;
    [SerializeField] int _startingHealth = 3;

    int _currentHealth;
    ShootEmUp2DKnockback _knockback;
    ShootEmUp2DDamageFlash _flash;
    ShootEmUp2DHealth _health;


    void Awake()
    {
        _knockback = GetComponent<ShootEmUp2DKnockback>();
        _flash = GetComponent<ShootEmUp2DDamageFlash>();
        _health = GetComponent<ShootEmUp2DHealth>();
    }


    void Start() 
    {
        ResetHealth();
    }


    public void ResetHealth() 
    {
        _currentHealth = _startingHealth;
    }


    public void TakeDamage( int amount ) 
    {
        _currentHealth -= amount;

        if (_currentHealth <= 0) 
        {
            OnDeath?.Invoke( this );//this ensure that we are passing in this specific instance of the health class
            Destroy(gameObject);
        }
    }

    
    public void TakeDamage( Vector2 damageSourceDir, int damageAmount, float knockbackThrust )
    {
        _health.TakeDamage( damageAmount );
        _knockback.ActivateKnockback( ShootEmUp2DPlayerController.Instance.transform.position, knockbackThrust );
    }

    public void TakeHit()
    {
        _flash.StartFlash();
    }
}
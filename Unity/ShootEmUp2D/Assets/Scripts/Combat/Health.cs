 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Health : MonoBehaviour, IDamageable
{
    public GameObject SplatterPrefab => _splatterPrefab;//this is called an expression-bodied getter
    public GameObject DeathVFX => _deathVFX;

    public static Action<Health> OnDeath;//this passes the health class into the event
    
    [SerializeField] GameObject _splatterPrefab; //TODO: pick better name than splatterPrefab
    [SerializeField] GameObject _deathVFX;
    [SerializeField] int _startingHealth = 3;

    int _currentHealth;
    Knockback _knockback;
    DamageFlash _flash;
    Health _health;


    void Awake()
    {
        _knockback = GetComponent<Knockback>();
        _flash = GetComponent<DamageFlash>();
        _health = GetComponent<Health>();
    }


    void Start() 
    {
        ResetHealth();
    }


    public void ResetHealth() 
    {
        _currentHealth = _startingHealth;
    }


    public void TakeDamage(int amount) 
    {
        _currentHealth -= amount;

        if (_currentHealth <= 0) 
        {
            OnDeath?.Invoke(this);//this ensure that we are passing in this specific instance of the health class
            Destroy(gameObject);
        }
    }

    
    public void TakeDamage(Vector2 damageSourceDir, int damageAmount, float knockbackThrust)
    {
        _health.TakeDamage(damageAmount);
        _knockback.ActivateKnockback(PlayerController.Instance.transform.position, knockbackThrust);
    }

    public void TakeHit()
    {
        _flash.StartFlash();
    }
}
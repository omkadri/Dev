 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ShootEmUp2DHealth : MonoBehaviour
{
    public Action OnDeath;
    
    [SerializeField] GameObject _splatterPrefab; //TODO: picl better name than splatterPrefab
    [SerializeField] GameObject _deathVFX;
    [SerializeField] int _startingHealth = 3;

    int _currentHealth;


    void Start() 
    {
        ResetHealth();
    }


    void OnEnable()
    {
        OnDeath += SpawnDeathSplatterPrefab;
        OnDeath += SpawnDeathVFX;
    }


    void OnDisable()
    {
        OnDeath -= SpawnDeathSplatterPrefab;
        OnDeath -= SpawnDeathVFX;
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
            OnDeath?.Invoke();
            Destroy(gameObject);
        }
    }


    void SpawnDeathSplatterPrefab()
    {
        GameObject newSplatterPrefab = Instantiate( _splatterPrefab, transform.position, transform.rotation );//TODO: Investigate randomizing rotation
        SpriteRenderer deathSplatterSpriteRenderer = newSplatterPrefab.GetComponent<SpriteRenderer>();
        ShootEmUp2DColorChanger colorChanger = GetComponent<ShootEmUp2DColorChanger>();
        Color currentColor = colorChanger.DefaultColor;
        deathSplatterSpriteRenderer.color = currentColor;
    }


    void SpawnDeathVFX()
    {
        GameObject newDeathVFX = Instantiate( _deathVFX, transform.position, transform.rotation );
        ParticleSystem.MainModule ps = newDeathVFX.GetComponent<ParticleSystem>().main;
        ShootEmUp2DColorChanger colorChanger = GetComponent<ShootEmUp2DColorChanger>();
        Color currentColor = colorChanger.DefaultColor;
        ps.startColor = currentColor;
    }
}
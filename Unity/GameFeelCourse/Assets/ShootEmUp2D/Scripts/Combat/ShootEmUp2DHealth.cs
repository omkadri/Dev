 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ShootEmUp2DHealth : MonoBehaviour
{
    public Action OnDeath;
    
    [SerializeField] GameObject splatterPrefab; //TODO: picl better name than splatterPrefab
    [SerializeField] GameObject deathVFX;
    [SerializeField] int startingHealth = 3;

    int currentHealth;


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
        currentHealth = startingHealth;
    }


    public void TakeDamage(int amount) 
    {
        currentHealth -= amount;

        if (currentHealth <= 0) 
        {
            OnDeath?.Invoke();
            Destroy(gameObject);
        }
    }


    void SpawnDeathSplatterPrefab()
    {
        GameObject newSplatterPrefab = Instantiate( splatterPrefab, transform.position, transform.rotation );//TODO: Investigate randomizing rotation
        SpriteRenderer deathSplatterSpriteRenderer = newSplatterPrefab.GetComponent<SpriteRenderer>();
        ShootEmUp2DColorChanger colorChanger = GetComponent<ShootEmUp2DColorChanger>();
        Color currentColor = colorChanger.DefaultColor;
        deathSplatterSpriteRenderer.color = currentColor;
    }


    void SpawnDeathVFX()
    {
        GameObject newDeathVFX = Instantiate( deathVFX, transform.position, transform.rotation );
        ParticleSystem.MainModule ps = newDeathVFX.GetComponent<ParticleSystem>().main;
        ShootEmUp2DColorChanger colorChanger = GetComponent<ShootEmUp2DColorChanger>();
        Color currentColor = colorChanger.DefaultColor;
        ps.startColor = currentColor;
    }
}
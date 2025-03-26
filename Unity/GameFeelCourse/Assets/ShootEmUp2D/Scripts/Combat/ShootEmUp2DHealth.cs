 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DHealth : MonoBehaviour
{
    [SerializeField] GameObject splatterPrefab; //TODO: picl better name than splatterPrefab
    [SerializeField] int startingHealth = 3;

    int currentHealth;


    void Start() 
    {
        ResetHealth();
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
            SpawnDeathSplatterPrefab();
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
}
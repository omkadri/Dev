using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPGEnemyHealth : MonoBehaviour
{
    [SerializeField] int startingHealth = 3;
    [SerializeField] int currentHealth;
    [SerializeField] Rigidbody2D rb;
    [SerializeField] Material matWhiteFlash;
    [SerializeField] GameObject deathVFX;
    [SerializeField] float setDefaultMatRestorefloat = .1f;
    Material matDefault;
    SpriteRenderer spriteRenderer;


    void Awake() 
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        matDefault = spriteRenderer.material;
    }


    void Start() 
    {
        currentHealth = startingHealth;
    }


    void Update() 
    { 
        DetectDeath();
    }


    public void TakeDamage(int damage) 
    {
        currentHealth -= damage;
        spriteRenderer.material = matWhiteFlash;
        StartCoroutine(SetDefaultMatRoutine(setDefaultMatRestorefloat));
    }


    void DetectDeath() 
    {
        if (currentHealth <= 0) 
        {
            Instantiate(deathVFX, transform.position, transform.rotation);
            Destroy(gameObject);
        }
    }
    

    IEnumerator SetDefaultMatRoutine(float whiteFlashTime) 
    {
        yield return new WaitForSeconds(whiteFlashTime);
        spriteRenderer.material = matDefault;
    }
}
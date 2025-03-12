using System.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class TopDown2DPlayerHealth : Singleton<TopDown2DPlayerHealth>
{
    [SerializeField] int maxHealth = 3;
    [SerializeField] float knockbackThrustAmount = 10f;
    [SerializeField] float damageRecoveryTime = 1f;

    Slider healthSlider;
    int currentHealth;
    bool canTakeDamage = true;

    TopDown2DKnockback knockback;
    TopDown2DDamageFlash damageFlash;


    protected override void Awake()
    {
        base.Awake();
        knockback = GetComponent<TopDown2DKnockback>();
        damageFlash = GetComponent<TopDown2DDamageFlash>();
    }


    void Start()
    {
        currentHealth = maxHealth;
        UpdateHealthSlider();
    }


    void OnCollisionStay2D( Collision2D other )//unlike OnCollisionEnter2D (which is called once), OnCollisionStay2D is called every frame the collision is occuring.
    {
        TopDown2DEnemyAI enemyAI = other.gameObject.GetComponent<TopDown2DEnemyAI>();

        if ( enemyAI )
        {
            TakeDamage( 1, other.transform );//TODO: fix magic number
        }
    }


    public void HealPlayer()
    {
        if ( currentHealth < maxHealth )
        {
            currentHealth += 1;
            UpdateHealthSlider();
        }
    }


    public void TakeDamage( int damageAmount, Transform hitTransform )
    {
        if ( !canTakeDamage )
        {
            return;
        }

        TopDown2DScreenShakeManager.Instance.ShakeScreen();
        knockback.GetKnockback( hitTransform, knockbackThrustAmount );
        StartCoroutine( damageFlash.DamageFlashRoutine() );
        canTakeDamage = false;
        currentHealth -= damageAmount;
        Debug.Log( damageAmount + " damage taken!" );
        Debug.Log( "Current health is: " + currentHealth );
        StartCoroutine( DamageRecoveryRoutine() );
        UpdateHealthSlider();
        CheckIfPlayerDeath();
    }


    void CheckIfPlayerDeath()
    {
        if ( currentHealth <= 0 )
        {
            currentHealth = 0;
            Debug.Log( "Player has Died" );
        }
    }


    IEnumerator DamageRecoveryRoutine()
    {
        yield return new WaitForSeconds( damageRecoveryTime );
        canTakeDamage = true;
    }


    void UpdateHealthSlider()
    {
        if ( !healthSlider )
        {
            healthSlider = GameObject.Find( "HealthSlider" ).GetComponent<Slider>();//TODO: find alternative to hard string reference
        }

        healthSlider.maxValue = maxHealth;
        healthSlider.value = currentHealth;
    }
}
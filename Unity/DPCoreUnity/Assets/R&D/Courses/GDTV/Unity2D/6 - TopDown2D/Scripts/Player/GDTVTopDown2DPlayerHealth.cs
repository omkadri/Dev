using System.Collections;
using UnityEngine;

public class GDTVTopDown2DPlayerHealth : MonoBehaviour
{
    [SerializeField] int maxHealth = 3;
    [SerializeField] float knockbackThrustAmount = 10f;
    [SerializeField] float damageRecoveryTime = 1f;

    int currentHealth;
    bool canTakeDamage = true;

    GDTVTopDown2DKnockback knockback;
    GDTVTopDown2DDamageFlash damageFlash;


    void Awake()
    {
        knockback = GetComponent<GDTVTopDown2DKnockback>();
        damageFlash = GetComponent<GDTVTopDown2DDamageFlash>();
    }


    void Start()
    {
        currentHealth = maxHealth;
    }


    void OnCollisionStay2D( Collision2D other )//unlike OnCollisionEnter2D (which is called once), OnCollisionStay2D is called every frame the collision is occuring.
    {
        GDTVTopDown2DEnemyAI enemyAI = other.gameObject.GetComponent<GDTVTopDown2DEnemyAI>();

        if ( enemyAI && canTakeDamage )
        {
            TakeDamage( 1 );
            knockback.GetKnockback( other.gameObject.transform, knockbackThrustAmount );
            StartCoroutine( damageFlash.DamageFlashRoutine() );
        }
    }


    void TakeDamage( int damageAmount )
    {
        canTakeDamage = false;
        currentHealth -= damageAmount;
        Debug.Log( damageAmount + " damage taken!" );
        Debug.Log( "Current health is: " + currentHealth );
        StartCoroutine( DamageRecoveryRoutine() );
    }


    IEnumerator DamageRecoveryRoutine()
    {
        yield return new WaitForSeconds( damageRecoveryTime );
        canTakeDamage = true;
    }
}
using System.Collections;
using UnityEngine;

public class TopDown2DPlayerHealth : Singleton<TopDown2DPlayerHealth>
{
    [SerializeField] int maxHealth = 3;
    [SerializeField] float knockbackThrustAmount = 10f;
    [SerializeField] float damageRecoveryTime = 1f;

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
        currentHealth += 1;
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
    }


    IEnumerator DamageRecoveryRoutine()
    {
        yield return new WaitForSeconds( damageRecoveryTime );
        canTakeDamage = true;
    }
}
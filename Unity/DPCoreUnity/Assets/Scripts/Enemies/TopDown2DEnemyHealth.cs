using System.Collections;
using UnityEngine;

public class TopDown2DEnemyHealth : MonoBehaviour
{
    [SerializeField] int startingHealth = 3;
    [SerializeField] GameObject deathVFXPrefab;
    [SerializeField] float knockbackThrust = 15f;

    TopDown2DKnockback knockback;
    TopDown2DDamageFlash damageFlash;


    int currentHealth;


    void Awake()
    {
        knockback = GetComponent<TopDown2DKnockback>();
        damageFlash = GetComponent<TopDown2DDamageFlash>();
    }


    void Start()
    {
        currentHealth = startingHealth;
    }


    public void TakeDamage( int damage )
    {
        currentHealth -= damage;
        knockback.GetKnockback( TopDown2DPlayerController.Instance.transform, knockbackThrust );
        StartCoroutine( damageFlash.DamageFlashRoutine() );
        StartCoroutine( CheckDetectDeathRoutine() );
    }


    IEnumerator CheckDetectDeathRoutine()
    {
        yield return new WaitForSeconds( damageFlash.GetRestoreMatTime() );
        DetectDeath();
    }


    public void DetectDeath()
    {
        if ( currentHealth <= 0 )
        {
            Instantiate( deathVFXPrefab, transform.position, Quaternion.identity );
            GetComponent<TopDown2DPickupSpawner>().DropItems();
            Destroy( gameObject );
        }
    }
}
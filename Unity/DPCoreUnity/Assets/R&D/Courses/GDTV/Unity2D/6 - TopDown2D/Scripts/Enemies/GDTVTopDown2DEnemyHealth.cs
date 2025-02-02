using System.Collections;
using UnityEngine;

public class GDTVTopDown2DEnemyHealth : MonoBehaviour
{
    [SerializeField] int startingHealth = 3;
    [SerializeField] GameObject deathVFXPrefab;
    [SerializeField] float knockbackThrust = 15f;

    GDTVTopDown2DKnockback knockback;
    GDTVTopDown2DDamageFlash damageFlash;


    int currentHealth;


    void Awake()
    {
        knockback = GetComponent<GDTVTopDown2DKnockback>();
        damageFlash = GetComponent<GDTVTopDown2DDamageFlash>();
    }


    void Start()
    {
        currentHealth = startingHealth;
    }


    public void TakeDamage( int damage )
    {
        currentHealth -= damage;
        knockback.GetKnockback( GDTVTopDown2DPlayerController.Instance.transform, knockbackThrust );
        StartCoroutine( damageFlash.DamageFlashRoutine() );
        StartCoroutine( CheckDetectDeathRoutine() );
    }


    IEnumerator CheckDetectDeathRoutine()
    {
        yield return new WaitForSeconds( damageFlash.GetRestoreMatTime() );
        Die();
    }


    public void Die()
    {
        if ( currentHealth <= 0 )
        {
            Instantiate( deathVFXPrefab, transform.position, Quaternion.identity );
            Destroy( gameObject );
        }
    }
}
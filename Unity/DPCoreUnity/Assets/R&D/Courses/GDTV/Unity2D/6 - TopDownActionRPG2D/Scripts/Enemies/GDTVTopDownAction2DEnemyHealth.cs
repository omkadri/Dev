using System.Collections;
using UnityEngine;

public class GDTVTopDownAction2DEnemyHealth : MonoBehaviour
{
    [SerializeField] int startingHealth = 3;
    [SerializeField] GameObject deathVFXPrefab;

    GDTVTopDownAction2DKnockback knockback;
    GDTVTopDownAction2DDamageFlash damageFlash;


    int currentHealth;


    void Awake()
    {
        knockback = GetComponent<GDTVTopDownAction2DKnockback>();
        damageFlash = GetComponent<GDTVTopDownAction2DDamageFlash>();
    }


    void Start()
    {
        currentHealth = startingHealth;
    }


    public void TakeDamage( int damage )
    {
        currentHealth -= damage;
        knockback.GetKnockback( GDTVTopDownAction2DPlayerController.Instance.transform, 15f );
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

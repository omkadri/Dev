using System.Collections;
using UnityEngine;

public class EnemyHealth : MonoBehaviour
{
    [SerializeField] int startingHealth = 3;
    [SerializeField] GameObject deathVFXPrefab;
    [SerializeField] float knockbackThrust = 15f;

    Knockback knockback;
    DamageFlash damageFlash;


    int currentHealth;


    void Awake()
    {
        knockback = GetComponent<Knockback>();
        damageFlash = GetComponent<DamageFlash>();
    }


    void Start()
    {
        currentHealth = startingHealth;
    }


    public void TakeDamage(int damage)
    {
        currentHealth -= damage;
        knockback.GetKnockback(PlayerController.Instance.transform, knockbackThrust);
        StartCoroutine(damageFlash.DamageFlashRoutine());
        StartCoroutine(CheckDetectDeathRoutine());
    }


    IEnumerator CheckDetectDeathRoutine()
    {
        yield return new WaitForSeconds(damageFlash.GetRestoreMatTime());
        DetectDeath();
    }


    public void DetectDeath()
    {
        if (currentHealth <= 0)
        {
            Instantiate(deathVFXPrefab, transform.position, Quaternion.identity);
            GetComponent<PickupSpawner>().DropItems();
            Destroy(gameObject);
        }
    }
}
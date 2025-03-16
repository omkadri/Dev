using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class RPGPlayerHealth : MonoBehaviour
{
    public int currentHealth;
    public int maxHealth;
    
    [SerializeField] int startingHealth = 3;
    [SerializeField] Animator animator;
    [SerializeField] Material whiteFlashMat;
    [SerializeField] float whiteFlashTime = .1f;
    [SerializeField] float damageRecoveryTime = 1f;
    [SerializeField] float respawnTimeFloat = 2f;
    Material defaultMat;
    SpriteRenderer spriteRenderer;
    bool canTakeDamage = true;
    bool isDead = false;
    Rigidbody2D rb;


    void Awake() 
    {
        rb = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        currentHealth = startingHealth;
        maxHealth = startingHealth;
        defaultMat = spriteRenderer.material;
    }


    void OnCollisionStay2D(Collision2D other) 
    { 
        if (other.gameObject.CompareTag("Enemy") && canTakeDamage && currentHealth > 0) {
            RPGEnemyMovement enemy = other.gameObject.GetComponent<RPGEnemyMovement>();
            TakeDamage(enemy.damageDoneToHero);
            GetComponent<RPGKnockback>().getKnockedBack(other.gameObject.transform, enemy.enemyKnockBackThrust);
        }
    }


    public void CheckIfDeath() 
    {
        if (currentHealth <= 0 && !isDead) 
        {
            // isDead set to prevent death animation from triggering multiple times
            isDead = true;
            RPGPlayerController.Instance.canMove = false;
            RPGPlayerController.Instance.canAttack = false;
            animator.SetTrigger("dead");
            StartCoroutine(RespawnRoutine());
        } 
        else 
        {
            RPGPlayerController.Instance.canMove = true;
            RPGPlayerController.Instance.canAttack = true;
        }
    }


    public void TakeDamage(int damage) 
    {
        spriteRenderer.material = whiteFlashMat;
        currentHealth -= damage;
        canTakeDamage = false;
        StartCoroutine(SetDefaultMatRoutine());
        StartCoroutine(DamageRecoveryTimeRoutine());
    }


    IEnumerator SetDefaultMatRoutine() 
    {
        yield return new WaitForSeconds(whiteFlashTime);
        spriteRenderer.material = defaultMat;
    }


    IEnumerator DamageRecoveryTimeRoutine() 
    {
        yield return new WaitForSeconds(damageRecoveryTime);
        canTakeDamage = true;
    }


    IEnumerator RespawnRoutine() 
    {
        yield return new WaitForSeconds(respawnTimeFloat);
        Destroy(RPGPlayerController.Instance.gameObject);
        SceneManager.LoadScene("RPGStarterKit2DTown");//TODO: Fix hard coded reference
    }
}
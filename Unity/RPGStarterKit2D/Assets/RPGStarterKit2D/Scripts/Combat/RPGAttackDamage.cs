using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// AttackDamage class can be put on any object with a trigger collider to set off different instances of damage.
public class RPGAttackDamage : MonoBehaviour
{
    // turned on in Bomb.cs script
    public bool isBombExplosion = false;

    [SerializeField] int damageAmount;
    [SerializeField] float knockbackTime;
    [SerializeField] float knockbackThrust;
    const string enemyString = "Enemy";
    const string playerString = "Player";


    void OnTriggerEnter2D(Collider2D other) 
    {
        EnemyAttack(other);
        PlayerSelfDamage(other);
        DestructibleAttack(other);
        DestroyBoulderBlockingCave(other);
    }


    void EnemyAttack(Collider2D other) 
    {
        if (other.gameObject.CompareTag(enemyString)) 
        {
            other.GetComponent<RPGEnemyHealth>().TakeDamage(damageAmount);
            other.GetComponent<RPGKnockback>().getKnockedBack(RPGPlayerController.Instance.transform, knockbackThrust);
        }
    }


    void PlayerSelfDamage(Collider2D other) 
    {
        if (other.gameObject.CompareTag(playerString)) 
        {
            other.GetComponent<RPGPlayerHealth>().TakeDamage(damageAmount);
            other.GetComponent<RPGKnockback>().getKnockedBack(transform, knockbackThrust);
        }
    }


    // Applies to bushes and pots
    void DestructibleAttack(Collider2D other) 
    {
        if (other.GetComponent<RPGBreakable>()) 
        {
            other.GetComponent<RPGBreakable>().BreakObject();
        }
    }


    // Cave will only be destroyed by the instance bomb explosion prefab
    void DestroyBoulderBlockingCave(Collider2D other) 
    {
        if (other.GetComponent<RPGBoulder>() && isBombExplosion) 
        {
            other.GetComponent<RPGBoulder>().DestroyBoulder();
        }
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Knockback class can be put on gameobjects that you want to thrust back with rigidbody force against other objects that would typically deal damage
public class RPGKnockback : MonoBehaviour
{
    [SerializeField] float knockbackTime;
    Rigidbody2D rb2d;


    void Awake() 
    {
        rb2d = GetComponent<Rigidbody2D>();
    }


    public void getKnockedBack(Transform damageSource, float knockbackThrust) 
    {
        Vector2 difference = transform.position - damageSource.position;
        difference = difference.normalized * knockbackThrust * rb2d.mass;
        rb2d.AddForce(difference, ForceMode2D.Impulse);

        // if KnockBack class is on our player game object
        if (GetComponent<RPGPlayerController>()) 
        {
            RPGPlayerController.Instance.canMove = false;
        }

        StartCoroutine(KnockRoutine());
    }


    IEnumerator KnockRoutine() 
    {
        yield return new WaitForSeconds(knockbackTime);
        rb2d.linearVelocity = Vector2.zero;

        // if KnockBack class is on our player game object
        if (GetComponent<RPGPlayerController>()) 
        {
            RPGPlayerController.Instance.canMove = true;
            GetComponent<RPGPlayerHealth>().CheckIfDeath();
        }
    }
}
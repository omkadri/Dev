 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameFeelTemplate2DHealth : MonoBehaviour
{
    [SerializeField] int startingHealth = 3;

    int currentHealth;


    void Start() 
    {
        ResetHealth();
    }


    public void ResetHealth() 
    {
        currentHealth = startingHealth;
    }


    public void TakeDamage(int amount) 
    {
        currentHealth -= amount;

        if (currentHealth <= 0) 
        {
            Destroy(gameObject);
        }
    }
}
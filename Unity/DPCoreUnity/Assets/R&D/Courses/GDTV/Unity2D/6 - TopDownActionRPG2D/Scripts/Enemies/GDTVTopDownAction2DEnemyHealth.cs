using UnityEngine;

public class GDTVTopDownAction2DEnemyHealth : MonoBehaviour
{
    [SerializeField] int startingHealth = 3;

    int currentHealth;

    void Start()
    {
        currentHealth = startingHealth;
    }


    public void TakeDamage( int damage )
    {
        currentHealth -= damage;
        Debug.Log( currentHealth );
        DetectDeath();
    }

    public void DetectDeath()
    {
        if ( currentHealth <= 0 )
        {
            Destroy( gameObject );
        }
    }
}

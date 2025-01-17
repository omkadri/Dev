using UnityEngine;

public class GDTVTopDownAction2DEnemyHealth : MonoBehaviour
{
    [SerializeField] int startingHealth = 3;
    [SerializeField] GDTVTopDownAction2DKnockback knockback;

    int currentHealth;

    void Awake()
    {
        knockback = GetComponent<GDTVTopDownAction2DKnockback>();
    }

    void Start()
    {
        currentHealth = startingHealth;
    }


    public void TakeDamage( int damage )
    {
        currentHealth -= damage;
        knockback.GetKnockback( GDTVTopDownAction2DPlayerController.Instance.transform, 15f );
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

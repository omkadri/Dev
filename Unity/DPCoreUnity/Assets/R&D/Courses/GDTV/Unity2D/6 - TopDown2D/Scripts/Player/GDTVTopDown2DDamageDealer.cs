using UnityEngine;

public class GDTVTopDown2DDamageDealer : MonoBehaviour
{
    [SerializeField] int damageAmount = 1;


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.gameObject.GetComponent<GDTVTopDown2DEnemyHealth>() )
        {
            GDTVTopDown2DEnemyHealth enemyHealth = other.gameObject.GetComponent<GDTVTopDown2DEnemyHealth>();
            enemyHealth.TakeDamage( damageAmount );
        }
    }
}

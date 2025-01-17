using UnityEngine;

public class GDTVTopDownAction2DDamageDealer : MonoBehaviour
{
    [SerializeField] int damageAmount = 1;

    void OnTriggerEnter2D( Collider2D other )
    {
        if( other.gameObject.GetComponent<GDTVTopDownAction2DEnemyHealth>() )
        {
            GDTVTopDownAction2DEnemyHealth enemyHealth = other.gameObject.GetComponent<GDTVTopDownAction2DEnemyHealth>();
            enemyHealth.TakeDamage( damageAmount );
        }
    }
}

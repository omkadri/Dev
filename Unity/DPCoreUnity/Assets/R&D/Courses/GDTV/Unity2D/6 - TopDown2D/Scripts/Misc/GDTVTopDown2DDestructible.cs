using UnityEngine;

public class GDTVTopDown2DDestructible : MonoBehaviour
{
    [SerializeField] GameObject destroyVFX;


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.GetComponent<GDTVTopDown2DDamageDealer>() || other.GetComponent<GDTVTopDown2DProjectile>() )
        {
            Instantiate( destroyVFX, transform.position, Quaternion.identity );
            if ( other.GetComponent<GDTVTopDown2DProjectile>() )
            {
                Destroy( other.gameObject );
            }
            Destroy( gameObject );
        }
    }
}

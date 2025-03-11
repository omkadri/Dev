using UnityEngine;

public class TopDown2DDestructible : MonoBehaviour
{
    [SerializeField] GameObject destroyVFX;


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.GetComponent<TopDown2DDamageDealer>() || other.GetComponent<TopDown2DProjectile>() )
        {
            GetComponent<TopDown2DPickupSpawner>().DropItems();//TODO investigate using OnDestroy callback, as well as a nil check
            Instantiate( destroyVFX, transform.position, Quaternion.identity );
            if ( other.GetComponent<TopDown2DProjectile>() )
            {
                Destroy( other.gameObject );
            }
            Destroy( gameObject );
        }
    }
}

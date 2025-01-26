using UnityEngine;

public class GDTVTopDown2DDestructable : MonoBehaviour
{
    [SerializeField] GameObject destroyVFX;


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.GetComponent<GDTVTopDown2DDamageDealer>() )
        {
            Instantiate( destroyVFX, transform.position, Quaternion.identity );
            Destroy( gameObject );
        }
    }
}

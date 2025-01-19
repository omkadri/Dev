using UnityEngine;

public class GDTVTopDownAction2DDestructable : MonoBehaviour
{
    [SerializeField] GameObject destroyVFX;


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.GetComponent<GDTVTopDownAction2DDamageDealer>() )
        {
            Instantiate( destroyVFX, transform.position, Quaternion.identity );
            Destroy( gameObject );
        }
    }
}

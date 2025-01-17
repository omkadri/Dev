using UnityEngine;

public class GDTVTopDownAction2DDamageDealer : MonoBehaviour
{
    void OnTriggerEnter2D( Collider2D other )
    {
        if( other.gameObject.GetComponent<GDTVTopDownAction2DEnemyAI>() )
        {
            Debug.Log( "Enemy Hit" );
        }
    }
}

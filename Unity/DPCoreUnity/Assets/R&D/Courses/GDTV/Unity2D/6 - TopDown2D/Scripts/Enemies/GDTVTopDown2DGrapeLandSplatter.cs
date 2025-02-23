using UnityEngine;

public class GDTVTopDown2DGrapeLandSplatter : MonoBehaviour
{
    GDTVTopDown2DSpriteFade spriteFade;


    void Awake()
    {
        spriteFade = GetComponent<GDTVTopDown2DSpriteFade>();
    }


    void Start()
    {
        StartCoroutine( spriteFade.SlowFadeRoutine() );

        Invoke( "DisableCollider", 0.2f );//TODO: fix magic number
    }


    void OnTriggerEnter2D( Collider2D other )
    {
        GDTVTopDown2DPlayerHealth playerHealth = other.gameObject.GetComponent<GDTVTopDown2DPlayerHealth>();
        playerHealth?.TakeDamage( 1, transform );//TODO: fix magic number
    }


    void DisableCollider()
    {
        GetComponent<CapsuleCollider2D>().enabled = false;
    }
}
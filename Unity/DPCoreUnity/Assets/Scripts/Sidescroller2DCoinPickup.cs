using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SideScroller2DCoinPickup : MonoBehaviour
{
    [SerializeField] AudioClip coinPickupSFX;
    [SerializeField] int pointsForCoinPickup = 100;

    bool wasCollected = false;

    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.tag == "Player" && !wasCollected )
        {
            wasCollected = true;
            FindFirstObjectByType<SideScroller2DGameSession>().AddToScore( pointsForCoinPickup );
            AudioSource.PlayClipAtPoint( coinPickupSFX, Camera.main.transform.position );
            gameObject.SetActive( false );
            Destroy( gameObject );
        }
    }
}
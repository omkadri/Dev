using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platformer2DCoinPickup : MonoBehaviour
{
    [SerializeField] AudioClip _coinPickupSFX;
    [SerializeField] int _pointsForCoinPickup = 100;

    bool wasCollected = false;

    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.tag == "Player" && !wasCollected )
        {
            wasCollected = true;
            FindFirstObjectByType<Platformer2DGameSession>().AddToScore( _pointsForCoinPickup );
            AudioSource.PlayClipAtPoint( _coinPickupSFX, Camera.main.transform.position );
            gameObject.SetActive( false );
            Destroy( gameObject );
        }
    }
}
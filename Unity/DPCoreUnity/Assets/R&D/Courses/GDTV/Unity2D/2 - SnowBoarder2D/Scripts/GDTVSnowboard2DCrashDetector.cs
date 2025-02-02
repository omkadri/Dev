using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[AddComponentMenu("")]
public class GDTVSnowboard2DCrashDetector : MonoBehaviour
{
[SerializeField] ParticleSystem crashParticle;
[SerializeField] AudioSource crashSFXAudioSource;

[SerializeField] float loadDelay = 2.5f;
bool hasCrashed = false;


void OnTriggerEnter2D( Collider2D other )
{
    if ( other.tag == "Ground" )
    {
        if ( !hasCrashed )
        {
            hasCrashed = true;
            FindFirstObjectByType<GDTVSnowboard2DPlayerController>().DisableControls();
            crashParticle.Play();
            Debug.Log( "You Crashed!" );
            if ( crashSFXAudioSource != null )
            {
              //Play audio once
              crashSFXAudioSource.Play();
            }
            Invoke( "ReloadScene", loadDelay );
        }

    }
}


  void ReloadScene()
  {
    SceneManager.LoadScene( "GDTVSnowboard2DBaseScene" );
  }
}
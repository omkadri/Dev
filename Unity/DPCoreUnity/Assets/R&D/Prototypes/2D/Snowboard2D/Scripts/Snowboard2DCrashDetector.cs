using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Snowboard2DCrashDetector : MonoBehaviour
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
      //TODO: Abstract this into a GameManager class
      FindFirstObjectByType<Snowboard2DPlayerController>().DisableControls();
      crashParticle.Play();
      //Create OnSnowboardCrashed callback
      Debug.Log( "You Crashed!" );
      if ( crashSFXAudioSource != null )
      {
        //Play audio once
        crashSFXAudioSource.Play();
      }
      //TODO: Abstract this into GameManager Class
      Invoke( "ReloadScene", loadDelay );
    }

  }
}


void ReloadScene()
{
  SceneManager.LoadScene( "Snowboard2DBaseScene" );
}
}

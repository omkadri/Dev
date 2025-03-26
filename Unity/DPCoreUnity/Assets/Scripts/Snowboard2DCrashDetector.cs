using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Snowboard2DCrashDetector : MonoBehaviour
{
  [SerializeField] ParticleSystem _crashParticle;
  [SerializeField] AudioSource _crashSFXAudioSource;

  [SerializeField] float _loadDelay = 3f;
  bool _hasCrashed = false;


  void OnTriggerEnter2D( Collider2D other )
  {
    if ( other.tag == "Ground" )
    {
      if ( !_hasCrashed )
      {
        _hasCrashed = true;
        //TODO: Abstract this into a GameManager class
        FindFirstObjectByType<Snowboard2DPlayerController>().DisableControls();
        _crashParticle.Play();
        //Create OnSnowboardCrashed callback
        Debug.Log( "You Crashed!" );
        if ( _crashSFXAudioSource != null )
        {
          //Play audio once
          _crashSFXAudioSource.Play();
        }
        //TODO: Abstract this into GameManager Class
        Invoke( "ReloadScene", _loadDelay );
      }

    }
  }


  void ReloadScene()
  {
    SceneManager.LoadScene( "Snowboard2DBaseScene" );
  }
}
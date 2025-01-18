using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Snowboard2DFinishLine : MonoBehaviour
{
  [SerializeField] float loadDelay = 1.5f;
  [SerializeField] ParticleSystem finishParticleA;
  [SerializeField] ParticleSystem finishParticleB;
  [SerializeField] AudioClip finishSFX;
  

  void OnTriggerEnter2D(Collider2D other)
  {
    if ( other.tag == "Player" )
    {
      //Create OnComplete callback
        Debug.Log( "You Finished!" );
        finishParticleA.Play();
        finishParticleB.Play();
        if( finishSFX != null )
        {
          GetComponent<AudioSource>().PlayOneShot(finishSFX);
        }
        Invoke( "ReloadScene", loadDelay );
    }
  }


  void ReloadScene()
  {
    SceneManager.LoadScene( "Snowboard2DBaseScene" );
  }
}

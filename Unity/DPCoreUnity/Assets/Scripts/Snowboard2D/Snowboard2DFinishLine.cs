using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Snowboard2DFinishLine : MonoBehaviour
{
  [SerializeField] float _loadDelay = 1.5f;
  [SerializeField] ParticleSystem _finishParticleA;
  [SerializeField] ParticleSystem _finishParticleB;
  [SerializeField] AudioClip _finishSFX;
  

  void OnTriggerEnter2D(Collider2D other)
  {
    if ( other.tag == "Player" )
    {
      //Create OnComplete callback
        Debug.Log( "You Finished!" );
        _finishParticleA.Play();
        _finishParticleB.Play();
        if ( _finishSFX != null )
        {
          GetComponent<AudioSource>().PlayOneShot(_finishSFX);
        }
        Invoke( "ReloadScene", _loadDelay );
    }
  }


  void ReloadScene()
  {
    SceneUtils.LoadSceneByName( "Snowboard2DBaseScene" );
  }
}
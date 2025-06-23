using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Snowboard2DDustTrail : MonoBehaviour
{
    [SerializeField] ParticleSystem _trailVXF;
    [SerializeField] AudioSource _trailSFXAudioSource;


    void OnCollisionEnter2D(Collision2D other)
    {   
        if (other.gameObject.tag == "Ground")
        {
            if (_trailVXF != null)
            {
                _trailVXF.Play();
            }
            if (_trailSFXAudioSource != null)
            {
                _trailSFXAudioSource.Play();
            }            
        }
    }


    void OnCollisionExit2D(Collision2D other)
    {
        if (other.gameObject.tag == "Ground")
        {
            if (_trailVXF != null)
            {
                _trailVXF.Stop();
                _trailSFXAudioSource.Stop();
            }
        }
    }
}
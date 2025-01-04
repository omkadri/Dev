using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GDTVSnowboard2DDustTrail : MonoBehaviour
{
    [SerializeField] ParticleSystem trailVXF;
    [SerializeField] AudioSource trailSFXAudioSource;

        void OnCollisionEnter2D(Collision2D other)
    {   
        if (other.gameObject.tag == "Ground")
        {
            if (trailVXF != null)
            {
                trailVXF.Play();
            }
            if (trailSFXAudioSource != null)
            {
                trailSFXAudioSource.Play();
            }            
        }
    }
    void OnCollisionExit2D(Collision2D other)
    {
        if (other.gameObject.tag == "Ground")
        {
            if (trailVXF != null)
            {
                trailVXF.Stop();
                trailSFXAudioSource.Stop();
            }
        }
    }
}

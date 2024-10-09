using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DustTrail : MonoBehaviour
{
      [SerializeField] ParticleSystem trailVXF;
        void OnCollisionEnter2D(Collision2D other)
    {   
        if (trailVXF != null)
        {
            if (other.gameObject.tag == "Ground")
            {
                trailVXF.Play();
            }
        }
    }
    void OnCollisionExit2D(Collision2D other)
    {
        if (trailVXF != null)
        {
            if (other.gameObject.tag == "Ground")
            {
                trailVXF.Stop();
            }
        }
    }
}

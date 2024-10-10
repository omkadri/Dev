using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishLine : MonoBehaviour
{
  [SerializeField] float loadDelay = 1.5f;
  [SerializeField] ParticleSystem finishParticleA;
  [SerializeField] ParticleSystem finishParticleB;
  [SerializeField] AudioClip finishSFX;
  
  void OnTriggerEnter2D(Collider2D other)
  {
    if (other.tag == "Player")
    {
        Debug.Log("You Finished!");
        finishParticleA.Play();
        finishParticleB.Play();
        if (finishSFX != null)
        {
          GetComponent<AudioSource>().PlayOneShot(finishSFX);
        }
        Invoke("ReloadScene", loadDelay);
    }
  }

  void ReloadScene()
  {
    SceneManager.LoadScene(0);
  }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CrashDetector : MonoBehaviour
{
[SerializeField] ParticleSystem crashParticle;
[SerializeField] AudioClip crashSFX;
[SerializeField] float loadDelay = 1.5f;

  void OnTriggerEnter2D(Collider2D other)
  {
    if (other.tag == "Ground")
    {
        crashParticle.Play();
        Debug.Log("You Crashed!");
        if (crashSFX != null)
        {
          GetComponent<AudioSource>().PlayOneShot(crashSFX);
        }
        Invoke("ReloadScene", loadDelay);
    }
  }
  void ReloadScene()
  {
    SceneManager.LoadScene(0);
  }
}

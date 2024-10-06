using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CrashDetector : MonoBehaviour
{
[SerializeField] ParticleSystem crashParticle;
[SerializeField] float loadDelay = 1.5f;

  void OnTriggerEnter2D(Collider2D other)
  {
    if (other.tag == "Ground")
    {
        crashParticle.Play();
        Debug.Log("You Crashed!");
        Invoke("ReloadScene", loadDelay);
    }
  }
  void ReloadScene()
  {
    SceneManager.LoadScene(0);
  }
}

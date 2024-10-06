using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishLine : MonoBehaviour
{
  [SerializeField] float loadDelay = 1.5f;
  [SerializeField] ParticleSystem finishParticleA;
  [SerializeField] ParticleSystem finishParticleB;
  
  void OnTriggerEnter2D(Collider2D other)
  {
    if (other.tag == "Player")
    {
        finishParticleA.Play();
        finishParticleB.Play();
        Invoke("ReloadScene", loadDelay);
        Debug.Log("You Finished!");
    }
  }

  void ReloadScene()
  {
    SceneManager.LoadScene(0);
  }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Splash : MonoBehaviour
{
  public float SplashPause = 2.0f;
  public AudioClip StartClip;

  private float _showTime = 0.0f;
  // Use this for initialization
  void Start()
  {
    AudioSource.PlayClipAtPoint( StartClip, FindObjectOfType<Camera>().transform.position, 1.0f );
  }

  // Update is called once per frame
  void Update()
  {
    _showTime += Time.deltaTime;
    if ( _showTime > SplashPause )
    {
      FindObjectOfType<LevelManager>().LoadNextLevel();
    }
  }
}

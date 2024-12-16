using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TileVania2DLevelExitGDTV : MonoBehaviour
{
    [SerializeField] float levelLoadDelay = 1f;
    [SerializeField] string nextSceneName;

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            StartCoroutine( LoadNextLevel() );
        }
    }

    IEnumerator LoadNextLevel()
    {
        FindObjectOfType<TileVania2DScenePersistGDTV>().ResetScenePersist();
        yield return new WaitForSecondsRealtime( levelLoadDelay );
        SceneManager.LoadScene( nextSceneName );
    }
}

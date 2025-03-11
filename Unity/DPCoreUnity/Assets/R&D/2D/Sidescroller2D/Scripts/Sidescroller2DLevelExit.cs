using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SideScroller2DLevelExit : MonoBehaviour
{
    [SerializeField] float levelLoadDelay = 1f;
    [SerializeField] string nextSceneName;


    void OnTriggerEnter2D(Collider2D other)
    {
        if ( other.tag == "Player" )
        {
            StartCoroutine( LoadNextLevelRoutine() );
        }
    }


    IEnumerator LoadNextLevelRoutine()
    {
        FindFirstObjectByType<SideScroller2DScenePersist>().ResetScenePersist();
        yield return new WaitForSecondsRealtime( levelLoadDelay );
        SceneManager.LoadScene( nextSceneName );
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Platformer2DLevelExit : MonoBehaviour
{
    [SerializeField] float _levelLoadDelay = 1f;
    [SerializeField] string _nextSceneName;


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.tag == "Player" )
        {
            StartCoroutine( LoadNextLevelRoutine() );
        }
    }


    IEnumerator LoadNextLevelRoutine()
    {
        FindFirstObjectByType<Platformer2DScenePersist>().ResetScenePersist();
        yield return new WaitForSecondsRealtime( _levelLoadDelay );
        SceneUtils.LoadSceneByName( _nextSceneName );
    }
}
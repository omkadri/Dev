using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class LevelExit : MonoBehaviour
{
    [SerializeField] float _levelLoadDelay = 1f;
    [SerializeField] string _nextSceneName;


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            StartCoroutine(LoadNextLevelRoutine());
        }
    }


    IEnumerator LoadNextLevelRoutine()
    {
        FindFirstObjectByType<ScenePersist>().ResetScenePersist();
        yield return new WaitForSecondsRealtime(_levelLoadDelay);
        SceneUtils.LoadSceneByName(_nextSceneName);
    }
}
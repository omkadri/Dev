using System.Collections;
using UnityEngine;

public class SceneLoader : MonoBehaviour
{
    [SerializeField] int _timeToWait = 4;
    int _currentSceneIndex;


    void Start()
    {
        _currentSceneIndex = SceneUtils.GetCurrentSceneIndex();
        if (_currentSceneIndex == 0)
        {
            StartCoroutine(WaitForTimeRoutine());
        }
    }


    IEnumerator WaitForTimeRoutine()
    {
        yield return new WaitForSeconds(_timeToWait);
        LoadNextScene();
    }


    public void LoadNextScene()
    {
        SceneUtils.LoadSceneByIndex(_currentSceneIndex + 1); //because in build index, Loading screen is 0 and Start Screen is 1
    }
}
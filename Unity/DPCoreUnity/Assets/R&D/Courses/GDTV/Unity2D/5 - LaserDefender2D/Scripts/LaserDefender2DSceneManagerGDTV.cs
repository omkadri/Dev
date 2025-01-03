using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LaserDefender2DSceneManagerGDTV : MonoBehaviour
{
    [SerializeField] string gameSceneName;
    [SerializeField] string mainMenuSceneName;
    [SerializeField] string gameOverSceneName;
    [SerializeField] float gameOverLoadDelay = 3f;

    public void LoadGameScene()
    {
        SceneManager.LoadScene( gameSceneName );
    }

    public void LoadMainMenuScene()
    {
        SceneManager.LoadScene( mainMenuSceneName );
    }

    public void LoadGameOverScene()
    {
        StartCoroutine( WaitAndLoad( gameOverSceneName, gameOverLoadDelay) );
    }

    public void QuitGame()
    {
        Debug.Log( "Quitting Game..." );
        Application.Quit();
    }

    IEnumerator WaitAndLoad( string sceneName, float delay )
    {
        yield return new WaitForSeconds( delay );
        SceneManager.LoadScene( sceneName );
    }
}

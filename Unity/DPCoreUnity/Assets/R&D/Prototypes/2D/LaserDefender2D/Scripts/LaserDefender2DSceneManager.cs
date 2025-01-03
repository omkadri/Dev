using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LaserDefender2DSceneManager : MonoBehaviour
{
    [SerializeField] LaserDefender2DScoreKeeper scoreKeeper;
    [SerializeField] string gameSceneName;

    [SerializeField] string mainMenuSceneName;

    [SerializeField] string gameOverSceneName;
    [SerializeField] float gameOverLoadDelay = 3f;

    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeper>();
    }
    
    public void LoadGameScene()
    {
        scoreKeeper.ResetScore();
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

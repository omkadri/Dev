using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GDTVLaserDefender2DSceneManager : MonoBehaviour
{
    [SerializeField] GDTVLaserDefender2DScoreKeeper scoreKeeper;
    [SerializeField] string gameSceneName;

    [SerializeField] string mainMenuSceneName;

    [SerializeField] string gameOverSceneName;
    [SerializeField] float gameOverLoadDelay = 3f;

    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<GDTVLaserDefender2DScoreKeeper>();
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

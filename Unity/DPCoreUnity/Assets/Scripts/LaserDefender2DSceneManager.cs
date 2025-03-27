using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LaserDefender2DSceneManager : MonoBehaviour
{
    [SerializeField] LaserDefender2DScoreKeeper _scoreKeeper;
    [SerializeField] string _gameSceneName;

    [SerializeField] string _mainMenuSceneName;

    [SerializeField] string _gameOverSceneName;
    [SerializeField] float _gameOverLoadDelay = 3f;


    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeper>();
    }

    
    public void LoadGameScene()
    {
        _scoreKeeper.ResetScore();
        SceneManager.LoadScene( _gameSceneName );
    }


    public void LoadMainMenuScene()
    {
        SceneManager.LoadScene( _mainMenuSceneName );
    }


    public void LoadGameOverScene()
    {
        StartCoroutine( WaitAndLoadRoutine( _gameOverSceneName, _gameOverLoadDelay) );
    }


    public void QuitGame()
    {
        Debug.Log( "Quitting Game..." );
        Application.Quit();
    }
    

    IEnumerator WaitAndLoadRoutine( string sceneName, float delay )
    {
        yield return new WaitForSeconds( delay );
        SceneManager.LoadScene( sceneName );
    }
}
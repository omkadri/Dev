using System.Collections;
using UnityEngine;

public class ScrollingShooter2DGameManager : MonoBehaviour
{
    [SerializeField] ScrollingShooter2DScoreKeeper _scoreKeeper;
    [SerializeField] string _gameSceneName;

    [SerializeField] string _mainMenuSceneName;

    [SerializeField] string _gameOverSceneName;
    [SerializeField] float _gameOverLoadDelay = 3f;


    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<ScrollingShooter2DScoreKeeper>();
    }

    
    public void LoadGameScene()
    {
        _scoreKeeper.ResetScore();
        SceneUtils.LoadSceneByName( _gameSceneName );
    }


    public void LoadMainMenuScene()
    {
        SceneUtils.LoadSceneByName( _mainMenuSceneName );
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
        SceneUtils.LoadSceneByName( sceneName );
    }
}
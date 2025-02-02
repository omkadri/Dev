using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms;

public class GDTVTileVania2DGameSession : MonoBehaviour
{
    [SerializeField] int playerLives = 3;
    [SerializeField] int score = 0;
    [SerializeField] TextMeshProUGUI livesText;
    [SerializeField] TextMeshProUGUI scoreText;
    [SerializeField] string gameOverSceneName;
    
    
    void Awake()
    {
        int numGameSessions = FindObjectsByType<GDTVTileVania2DGameSession>( FindObjectsSortMode.None ).Length;
        if ( numGameSessions > 1 ) // ensures that only one game session can exits at a time
        {
            Destroy( gameObject );
        }
        else
        {
            DontDestroyOnLoad( gameObject ); //ensures that game session is being carried over into the next scene
        }
    }


    void Start()
    {
        livesText.text = playerLives.ToString();
        scoreText.text = score.ToString();
    }


    public void ProcessPlayerDeath()
    {
        if (playerLives > 1)
        {
            TakeLife();
        }
        else
        {
            ResetGameSession();
        }
    }


    public void AddToScore( int pointsToAdd )
    {
        score += pointsToAdd;
        scoreText.text = score.ToString();
    }


    private void TakeLife()
    {
        playerLives -= 1;
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene( currentSceneIndex );
        livesText.text = playerLives.ToString();
    }
    

    void ResetGameSession()
    {
        FindFirstObjectByType<GDTVTileVania2DScenePersist>().ResetScenePersist();
        SceneManager.LoadScene( gameOverSceneName );
        Destroy( gameObject ); //allows future game sessions to exist without duplication
    }
}
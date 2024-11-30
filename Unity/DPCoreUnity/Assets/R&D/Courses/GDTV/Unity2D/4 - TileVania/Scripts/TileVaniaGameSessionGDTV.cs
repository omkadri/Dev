using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms;

public class TileVaniaGameSessionGDTV : MonoBehaviour
{
    [SerializeField] int playerLives = 3;
    [SerializeField] string gameOverSceneName;
    void Awake()
    {
        int numGameSessions = FindObjectsOfType<TileVaniaGameSessionGDTV>().Length;
        if ( numGameSessions > 1 ) // ensures that only one game session can exits at a time
        {
            Destroy( gameObject );
        }
        else
        {
            DontDestroyOnLoad( gameObject ); //ensures that game session is being carried over into the next scene
        }
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

    private void TakeLife()
    {
        playerLives -= 1;
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene( currentSceneIndex );
    }

    void ResetGameSession()
    {
        SceneManager.LoadScene( gameOverSceneName );
        Destroy( gameObject ); //allows future game sessions to exist without duplication
    }
}

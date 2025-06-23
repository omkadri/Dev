using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Platformer2DGameSession : MonoBehaviour
{
    [SerializeField] int _playerLives = 3;
    [SerializeField] int _score = 0;
    [SerializeField] TextMeshProUGUI _livesText;
    [SerializeField] TextMeshProUGUI _scoreText;
    [SerializeField] string _gameOverSceneName;
    
    
    void Awake()
    {
        int numGameSessions = FindObjectsByType<Platformer2DGameSession>(FindObjectsSortMode.None).Length;
        if (numGameSessions > 1) // ensures that only one game session can exits at a time
        {
            Destroy(gameObject);
        }
        else
        {
            DontDestroyOnLoad(gameObject); //ensures that game session is being carried over into the next scene
        }
    }


    void Start()
    {
        _livesText.text = _playerLives.ToString();
        _scoreText.text = _score.ToString();
    }


    public void ProcessPlayerDeath()
    {
        if (_playerLives > 1)
        {
            TakeLife();
        }
        else
        {
            ResetGameSession();
        }
    }


    public void AddToScore(int pointsToAdd)
    {
        _score += pointsToAdd;
        _scoreText.text = _score.ToString();
    }


    private void TakeLife()
    {
        _playerLives -= 1;
        int currentSceneIndex = SceneUtils.GetCurrentSceneIndex();
        SceneUtils.LoadSceneByIndex(currentSceneIndex);
        _livesText.text = _playerLives.ToString();
    }


    void ResetGameSession()
    {
        FindFirstObjectByType<Platformer2DScenePersist>().ResetScenePersist();
        SceneUtils.LoadSceneByName(_gameOverSceneName);
        Destroy(gameObject); //allows future game sessions to exist without duplication
    }
}
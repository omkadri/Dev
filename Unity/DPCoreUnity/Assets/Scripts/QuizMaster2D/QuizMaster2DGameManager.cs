using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class QuizMaster2DGameManager : MonoBehaviour
{
    QuizMaster2D _quiz;
    QuizMaster2DEndScreen _endScreen;


    void Awake()
    {
        _quiz = FindFirstObjectByType<QuizMaster2D>();
        _endScreen = FindFirstObjectByType<QuizMaster2DEndScreen>();
    }


    void Start()
    { 
        _quiz.gameObject.SetActive(true);
        _endScreen.gameObject.SetActive(false);
    }


    void Update()
    {
        if (_quiz.IsComplete)
        {
            _quiz.gameObject.SetActive(false);
            _endScreen.gameObject.SetActive(true);
            _endScreen.ShowFinalScore();
        }
    }


    public void OnReplayLevel()
    {
        SceneManager.LoadScene( SceneManager.GetActiveScene().buildIndex );
    }
}
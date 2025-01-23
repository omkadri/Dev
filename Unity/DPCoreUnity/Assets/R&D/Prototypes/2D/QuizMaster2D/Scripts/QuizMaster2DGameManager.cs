using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class QuizMaster2DGameManager : MonoBehaviour
{
    QuizMaster2D quiz;
    QuizMaster2DEndScreen endScreen;


    void Awake()
    {
        quiz = FindFirstObjectByType<QuizMaster2D>();
        endScreen = FindFirstObjectByType<QuizMaster2DEndScreen>();
    }


    void Start()
    { 
        quiz.gameObject.SetActive(true);
        endScreen.gameObject.SetActive(false);
    }


    void Update()
    {
        if (quiz.isComplete)
        {
            quiz.gameObject.SetActive(false);
            endScreen.gameObject.SetActive(true);
            endScreen.ShowFinalScore();
        }
    }


    public void OnReplayLevel()
    {
        SceneManager.LoadScene( SceneManager.GetActiveScene().buildIndex );
    }
}

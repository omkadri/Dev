using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class GDTVQuizMaster2DGameManager : MonoBehaviour
{
    GDTVQuizMaster2DQuiz quiz;
    GDTVQuizMaster2DEndScreen endScreen;


    void Awake()
    {
        quiz = FindFirstObjectByType<GDTVQuizMaster2DQuiz>();
        endScreen = FindFirstObjectByType<GDTVQuizMaster2DEndScreen>();
    }


    void Start()
    { 
        quiz.gameObject.SetActive( true );
        endScreen.gameObject.SetActive( false );
    }


    void Update()
    {
        if ( quiz.isComplete )
        {
            quiz.gameObject.SetActive( false );
            endScreen.gameObject.SetActive( true );
            endScreen.ShowFinalScore();
        }
    }


    public void OnReplayLevel()
    {
        SceneManager.LoadScene( SceneManager.GetActiveScene().buildIndex );
    }
}
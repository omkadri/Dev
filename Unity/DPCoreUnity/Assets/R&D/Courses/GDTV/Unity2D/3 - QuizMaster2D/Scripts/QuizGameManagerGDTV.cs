using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class QuizGameManagerGDTV : MonoBehaviour
{
    QuizGDTV quiz;
    EndScreenQuizGDTV endScreen;
    void Awake()
    {
        quiz = FindObjectOfType<QuizGDTV>();
        endScreen = FindObjectOfType<EndScreenQuizGDTV>();
    }

    void Start()
    { 
        quiz.gameObject.SetActive(true);
        endScreen.gameObject.SetActive(false);
    }

    void Update()
    {
        if(quiz.isComplete)
        {
            quiz.gameObject.SetActive(false);
            endScreen.gameObject.SetActive(true);
            endScreen.ShowFinalScore();
        }
    }

    public void OnReplayLevel()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}

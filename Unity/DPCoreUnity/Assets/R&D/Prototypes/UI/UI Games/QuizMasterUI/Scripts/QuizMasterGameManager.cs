using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class QuizMasterGameManager : MonoBehaviour
{
    QuizMaster quiz;
    QuizMasterEndScreen endScreen;
    void Awake()
    {
        quiz = FindObjectOfType<QuizMaster>();
        endScreen = FindObjectOfType<QuizMasterEndScreen>();
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

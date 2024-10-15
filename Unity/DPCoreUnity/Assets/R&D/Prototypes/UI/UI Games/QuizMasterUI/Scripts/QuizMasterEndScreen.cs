using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class QuizMasterEndScreen : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI finalScoreText;
    QuizMasterScoreKeeper scoreKeeper;
    void Awake()
    {
        scoreKeeper = FindObjectOfType<QuizMasterScoreKeeper>();
    }

    public void ShowFinalScore()
    {
        finalScoreText.text = "Quiz Completed!\nYou got a score of " + scoreKeeper.CalculateScore() + "%";
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class QuizMaster2DEndScreen : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI finalScoreText;
    QuizMaster2DScoreKeeper scoreKeeper;
    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<QuizMaster2DScoreKeeper>();
    }

    public void ShowFinalScore()
    {
        finalScoreText.text = "Quiz Completed!\nYou got a score of " + scoreKeeper.CalculateScore() + "%";
    }
}

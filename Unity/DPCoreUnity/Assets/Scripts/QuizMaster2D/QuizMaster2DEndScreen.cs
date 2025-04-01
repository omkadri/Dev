using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class QuizMaster2DEndScreen : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _finalScoreText;
    QuizMaster2DScoreKeeper _scoreKeeper;

    
    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<QuizMaster2DScoreKeeper>();
    }


    public void ShowFinalScore()
    {
        _finalScoreText.text = "Quiz Completed!\nYou got a score of " + _scoreKeeper.CalculateScore() + "%";
    }
}
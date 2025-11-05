using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Trivia2DEndScreen : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _finalScoreText;
    Trivia2DScoreKeeper _scoreKeeper;

    
    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<Trivia2DScoreKeeper>();
    }


    public void ShowFinalScore()
    {
        _finalScoreText.text = "Quiz Completed!\nYou got a score of " + _scoreKeeper.CalculateScore() + "%";
    }
}
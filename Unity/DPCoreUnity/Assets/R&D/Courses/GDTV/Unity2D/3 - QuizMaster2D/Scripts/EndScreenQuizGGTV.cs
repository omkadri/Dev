using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class EndScreenQuizGGTV : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI finalScoreText;
    ScoreKeeperGDTV scoreKeeper;
    void Awake()
    {
        scoreKeeper = FindObjectOfType<ScoreKeeperGDTV>();
    }

    public void ShowFinalScore()
    {
        finalScoreText.text = "Quiz Completed!\nYou got a score of " + scoreKeeper.CalculateScore() + "%";
    }
}

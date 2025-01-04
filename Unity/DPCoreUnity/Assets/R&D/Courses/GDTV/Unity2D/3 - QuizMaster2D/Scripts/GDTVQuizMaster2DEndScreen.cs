using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GDTVQuizMaster2DEndScreen : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI finalScoreText;
    GDTVQuizMaster2DScoreKeeper scoreKeeper;
    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<GDTVQuizMaster2DScoreKeeper>();
    }

    public void ShowFinalScore()
    {
        finalScoreText.text = "Quiz Completed!\nYou got a score of " + scoreKeeper.CalculateScore() + "%";
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreKeeperGDTV : MonoBehaviour
{
    int correctAnswers = 0;
    int questionsSeen = 0;

    public int GetCorrectAnswers()
    {
        return correctAnswers;
    }

    public void IncrementCorrectAnswers()
    {
        correctAnswers++;
    }

    public int GetTotalQuestionsSeen()
    {
        return questionsSeen;
    }

    public void IncrementTotalQuestionsSeen()
    {
        questionsSeen++;
    }

    public int CalculateScore()
    {
        return Mathf.RoundToInt(correctAnswers / (float)questionsSeen * 100); //we need to use (float) one of the values a floating point number. or else the division will not work.
    }
}

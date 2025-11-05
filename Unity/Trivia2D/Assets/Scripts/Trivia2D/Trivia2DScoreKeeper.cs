using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trivia2DScoreKeeper : MonoBehaviour
{
    int _correctAnswers = 0;
    int _questionsSeen = 0;


    public int GetCorrectAnswers()
    {
        return _correctAnswers;
    }


    public void IncrementCorrectAnswers()
    {
        _correctAnswers++;
    }


    public int GetTotalQuestionsSeen()
    {
        return _questionsSeen;
    }


    public void IncrementTotalQuestionsSeen()
    {
        _questionsSeen++;
    }


    public int CalculateScore()
    {
        return Mathf.RoundToInt(_correctAnswers / (float)_questionsSeen * 100); //we need to use (float) one of the values a floating point number. or else the division will not work.
    }
}
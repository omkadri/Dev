using System.Collections;
using System.Collections.Generic;
using Microsoft.Unity.VisualStudio.Editor;
using TMPro;
using UnityEngine;

public class QuizTimer : MonoBehaviour
{
    [SerializeField] float timeToCompleteQuestion = 30f;
    [SerializeField] float timeToShowCorrectAnswer = 10f;

    public bool loadNextQuestion;
    public bool isAnsweringQuestion;
    public float fillFraction;
    float timerValue;

    void Update()
    {
        UpdateTimer();
    }

    public void CancelTimer()
    {
        timerValue = 0;
    }

    void UpdateTimer()
    {
        timerValue -= Time.deltaTime;
        {
            if (isAnsweringQuestion)
            {
                if(timerValue > 0)
                {
                    fillFraction = timerValue / timeToCompleteQuestion;
                }
                else
                {
                    isAnsweringQuestion = false; 
                    timerValue = timeToShowCorrectAnswer;
                }
            }
            else
            {
                if(timerValue > 0)
                {
                    fillFraction = timerValue / timeToShowCorrectAnswer;
                }
                else
                {
                    isAnsweringQuestion = true;
                    timerValue = timeToCompleteQuestion;
                    loadNextQuestion = true;
                }
            }
        }
        UpdateTimerText(timerValue);
        //Debug.Log(isAnsweringQuestion + ": " + timerValue + "= " + fillFraction);
    }

    //TODO: Add SetFillAmount() to UIManager
    void SetFillAmount(Image image)
    {

    }

    void UpdateTimerText(float timerValue)
{
    TextMeshProUGUI timerText = GetComponentInChildren<TextMeshProUGUI>();

    if (timerText != null)
    {
        timerText.text = Mathf.Round(timerValue).ToString();
    }
    else
    {
        Debug.LogWarning("Timer Text component not found!");
    }
}
}

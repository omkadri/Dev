using System.Collections;
using System.Collections.Generic;
using Microsoft.Unity.VisualStudio.Editor;
using TMPro;
using UnityEngine;

public class QuizTimerGDTV : MonoBehaviour
{
    [SerializeField] float timeToCompleteQuestion = 30f;
    [SerializeField] float timeToShowCorrectAnswer = 10f;

    public bool loadNextQuestion;
    public bool isAnsweringQuestion;
    public float fillFraction;
    float timerValue;
    TextMeshProUGUI timerText;

    void Start()
    {
        timerText = GetComponentInChildren<TextMeshProUGUI>();
    }
    
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
                    ToggleTimerTextVisibilty(false);
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
                    ToggleTimerTextVisibilty(true);
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
    if (timerText != null)
    {
        timerText.text = Mathf.Round(timerValue).ToString();
    }
    else
    {
        Debug.LogWarning("Timer Text component not found!");
    }
}

    void ToggleTimerTextVisibilty(bool enabled)
    {
        if (timerText != null)
        {
            if(enabled)
            {
                timerText.enabled = true;
            }
            else
            {
                timerText.enabled = false;
            }
        }
    }
}

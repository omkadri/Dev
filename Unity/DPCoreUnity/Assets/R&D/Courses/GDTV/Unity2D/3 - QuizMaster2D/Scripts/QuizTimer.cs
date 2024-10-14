using System.Collections;
using System.Collections.Generic;
using Microsoft.Unity.VisualStudio.Editor;
using UnityEngine;

public class QuizTimer : MonoBehaviour
{
    [SerializeField] float timeToCompleteQuestion = 30f;
    [SerializeField] float timeToShowCorrectAnswer = 10f;
    public bool isAnsweringQuestion;
    float timerValue;

    void Update()
    {
        UpdateTimer();
    }

    void UpdateTimer()
    {
        timerValue -= Time.deltaTime;
        {
            if (isAnsweringQuestion)
            {
                if(timerValue <= 0)
                {
                    isAnsweringQuestion = false; 
                    timerValue = timeToShowCorrectAnswer;
                }
            }
            else
            {
                if(timerValue <= 0)
                {
                    isAnsweringQuestion = true;
                    timerValue = timeToCompleteQuestion;  
                }
            }
        }
        Debug.Log(timerValue);
    }

    //TODO: Add SetFillAmount() to UIManager
    void SetFillAmount(Image image)
    {

    }
}

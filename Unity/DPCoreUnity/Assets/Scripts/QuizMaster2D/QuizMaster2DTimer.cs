using System.Collections;
using System.Collections.Generic;
using Microsoft.Unity.VisualStudio.Editor;
using TMPro;
using UnityEngine;

public class QuizMaster2DTimer : MonoBehaviour
{
    [SerializeField] float _timeToCompleteQuestion = 30f;
    [SerializeField] float _timeToShowCorrectAnswer = 5f;

    public bool LoadNextQuestion { get; set; }
    public bool IsAnsweringQuestion { get; set; }
    public float FillFraction { get; set; }
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
            if ( IsAnsweringQuestion )
            {
                if ( timerValue > 0 )
                {
                    FillFraction = timerValue / _timeToCompleteQuestion;
                }
                else
                {
                    IsAnsweringQuestion = false; 
                    timerValue = _timeToShowCorrectAnswer;
                    ToggleTimerTextVisibilty( false );
                }
            }
            else
            {
                if ( timerValue > 0 )
                {
                    FillFraction = timerValue / _timeToShowCorrectAnswer;
                }
                else
                {
                    IsAnsweringQuestion = true;
                    timerValue = _timeToCompleteQuestion;
                    LoadNextQuestion = true;
                    ToggleTimerTextVisibilty( true );
                }
            }
        }
        UpdateTimerText( timerValue );
        //Debug.Log(isAnsweringQuestion + ": " + timerValue + "= " + fillFraction);
    }


    void UpdateTimerText( float timerValue )
    {
        if (timerText != null)
        {
            timerText.text = Mathf.Round( timerValue ).ToString();
        }
        else
        {
            Debug.LogWarning( "Timer Text component not found!" );
        }
    }


    void ToggleTimerTextVisibilty( bool enabled )
    {
        if ( timerText != null )
        {
            if ( enabled )
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
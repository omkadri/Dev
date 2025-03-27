using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Game Object/2D/QuizMaster2D/Quiz Master Question", fileName = "New Question")]
public class QuizMaster2DQuestionSO : ScriptableObject
{
    [TextArea(2, 6)]
    [SerializeField] string _question = "Enter New Question Text";
    [SerializeField] string[] _answers = new string[4];
    [SerializeField] int _correctAnswerIndex;


    public string GetQuestion()
    {
        return _question;
    }


     public string GetAnswer( int index )
    {
        return _answers[index];
    }


    public int GetCorrectAnswerIndex()
    {
        return _correctAnswerIndex;
    }
}
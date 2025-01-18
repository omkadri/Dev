using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Game Object/2D/GDTV/QuizMaster2D/Quiz Question", fileName = "New Question")]
public class GDTVQuizMaster2DQuestionSO : ScriptableObject
{
    [TextArea(2, 6)]
    [SerializeField] string question = "Enter New Question Text";
    [SerializeField] string[] answers = new string[4];
    [SerializeField] int correctAnswerIndex;


    public string GetQuestion()
    {
        return question;
    }


     public string GetAnswer( int index )
    {
        return answers[index];
    }


    public int GetCorrectAnswerIndex()
    {
        return correctAnswerIndex;
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class GDTVQuizMaster2DQuiz : MonoBehaviour
{
    [Header("Questions")]
    [SerializeField] TextMeshProUGUI questionText;
    [SerializeField] List<GDTVQuizMaster2DQuestionSO> questions = new List<GDTVQuizMaster2DQuestionSO>();
    [SerializeField] GDTVQuizMaster2DQuestionSO currentQuestion;
    Color defaultQuestionColor;

    [Header("Answers")]
    [SerializeField] GameObject[] answerButtons;
    int correctAnswerIndex;
    bool hasAnsweredEarly = true;

    [Header("Button Colors")]
    [SerializeField] Sprite defaultAnswerSprite;
    [SerializeField] Sprite correctAnswerSprite;

    [Header("Timer")]
    [SerializeField] Image timerImage;
    GDTVQuizMaster2DTimer quizTimer;

    [Header("Scoring")]
    [SerializeField] TextMeshProUGUI scoreText;
    GDTVQuizMaster2DScoreKeeper scoreKeeper;

    [Header("ProgressBar")]
    [SerializeField] Slider progressBar;

    public bool isComplete;



    void Awake()
    {
        quizTimer = FindFirstObjectByType<GDTVQuizMaster2DTimer>();
        scoreKeeper = FindFirstObjectByType<GDTVQuizMaster2DScoreKeeper>();
    }

    void Start()
    {
        progressBar.maxValue = questions.Count;
        progressBar.value = 0;
        defaultQuestionColor = questionText.color;  
    }

    void Update()
    {
        timerImage.fillAmount = quizTimer.fillFraction;
        if(quizTimer.loadNextQuestion)
        {
            if(progressBar.value == progressBar.maxValue)
            {
                isComplete = true;
                return;
            }

            hasAnsweredEarly = false;
            GetNextQuestion();
            quizTimer.loadNextQuestion = false;
        }
        else if(!hasAnsweredEarly && !quizTimer.isAnsweringQuestion)
        {
            DisplayAnswer(-1);// using -1 because we the player did not select an answer. so -1 automatically triggers the else block in Displayanswer()
            SetButtonState(false);
        }
    }

    void DisplayQuestion()
    {
        questionText.text = currentQuestion.GetQuestion();

        for (int i = 0; i < answerButtons.Length; i++)
        {
            TextMeshProUGUI buttonText = answerButtons[i].GetComponentInChildren<TextMeshProUGUI>();
            buttonText.text = currentQuestion.GetAnswer(i);
        }
    }

    void GetNextQuestion()
    {
        if(questions.Count > 0)
        {
            SetButtonState(true);
            SetDefaultButtonSprite();
            GetRandomQuestion();
            DisplayQuestion();
            progressBar.value ++;
            scoreKeeper.IncrementTotalQuestionsSeen();
            questionText.color = defaultQuestionColor;
        }  
    }

    void GetRandomQuestion()
    {
        int index = Random.Range(0, questions.Count);
        currentQuestion = questions[index];

        if(questions.Contains(currentQuestion))
        {
            questions.Remove(currentQuestion);
        }
    }

    public void OnAnswerSelected(int index)
    {
        hasAnsweredEarly = true;
        DisplayAnswer(index);
        SetButtonState(false);
        quizTimer.CancelTimer();
        scoreText.text = "Score: " + scoreKeeper.CalculateScore() + "%";
    }

    private void DisplayAnswer(int index)
    {
        Image buttonImage;

        //TODO: Implement correct image vs. incorrect image
        if (index == currentQuestion.GetCorrectAnswerIndex())
        {
            questionText.text = "Correct!!!";
            buttonImage = answerButtons[index].GetComponent<Image>();
            buttonImage.sprite = correctAnswerSprite;
            scoreKeeper.IncrementCorrectAnswers();
            questionText.color = Color.green;
        }
        else
        {
            correctAnswerIndex = currentQuestion.GetCorrectAnswerIndex();
            string correctAnswer = currentQuestion.GetAnswer(correctAnswerIndex);
            questionText.text = "Wrong!!! The Correct Answer is:\n" + correctAnswer;
            questionText.color = Color.red;

            buttonImage = answerButtons[correctAnswerIndex].GetComponent<Image>();
            buttonImage.sprite = correctAnswerSprite;
        }
    }

    void SetButtonState(bool state)
    {
        for(int i = 0; i < answerButtons.Length; i++)
        {
            Button button = answerButtons[i].GetComponent<Button>();
            button.interactable = state;
        }
    }

    void SetDefaultButtonSprite()
    {
        for(int i = 0; i < answerButtons.Length; i++)
        {
            Image buttonImage = answerButtons[i].GetComponent<Image>();
            buttonImage.sprite = defaultAnswerSprite;
        }
    }
}

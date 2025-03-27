using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class QuizMaster2D : MonoBehaviour
{
    [Header("Questions")]
    [SerializeField] TextMeshProUGUI _questionText;
    [SerializeField] List<QuizMaster2DQuestionSO> _questions = new List<QuizMaster2DQuestionSO>();

    [Header("Answers")]
    [SerializeField] GameObject[] _answerButtons;

    [Header("Button Colors")]
    [SerializeField] Sprite _defaultAnswerSprite;
    [SerializeField] Sprite _correctAnswerSprite;

    [Header("Timer")]
    [SerializeField] Image _timerImage;

    [Header("Scoring")]
    [SerializeField] TextMeshProUGUI _scoreText;

    [Header("ProgressBar")]
    [SerializeField] Slider _progressBar;

    int _correctAnswerIndex;
    bool _hasAnsweredEarly = true;
    QuizMaster2DQuestionSO _currentQuestion;
    Color _defaultQuestionColor;
    public bool IsComplete { get; set; }

    QuizMaster2DTimer _quizTimer;
    QuizMaster2DScoreKeeper _scoreKeeper;


    void Awake()
    {
        _quizTimer = FindFirstObjectByType<QuizMaster2DTimer>();
        _scoreKeeper = FindFirstObjectByType<QuizMaster2DScoreKeeper>();
    }


    void Start()
    {
        _progressBar.maxValue = _questions.Count;
        _progressBar.value = 0;
        _defaultQuestionColor = _questionText.color;  
    }


    void Update()
    {
        _timerImage.fillAmount = _quizTimer.FillFraction;
        if ( _quizTimer.LoadNextQuestion )
        {
            if ( _progressBar.value == _progressBar.maxValue )
            {
                IsComplete = true;
                return;
            }

            _hasAnsweredEarly = false;
            GetNextQuestion();
            _quizTimer.LoadNextQuestion = false;
        }
        else if ( !_hasAnsweredEarly && !_quizTimer.IsAnsweringQuestion )
        {
            DisplayAnswer( -1 );// using -1 because we the player did not select an answer. so -1 automatically triggers the else block in Displayanswer()
            SetButtonState( false );
        }
    }


    void DisplayQuestion()
    {
        _questionText.text = _currentQuestion.GetQuestion();

        for ( int i = 0; i < _answerButtons.Length; i++ )
        {
            TextMeshProUGUI buttonText = _answerButtons[i].GetComponentInChildren<TextMeshProUGUI>();
            buttonText.text = _currentQuestion.GetAnswer( i );
        }
    }


    void GetNextQuestion()
    {
        if (_questions.Count > 0)
        {
            SetButtonState( true );
            SetDefaultButtonSprite();
            GetRandomQuestion();
            DisplayQuestion();
            _progressBar.value ++;
            _scoreKeeper.IncrementTotalQuestionsSeen();
            _questionText.color = _defaultQuestionColor;
        }  
    }


    void GetRandomQuestion()
    {
        int index = Random.Range( 0, _questions.Count );
        _currentQuestion = _questions[index];

        if ( _questions.Contains( _currentQuestion ) )
        {
            _questions.Remove( _currentQuestion );
        }
    }


    public void OnAnswerSelected( int index )
    {
        _hasAnsweredEarly = true;
        DisplayAnswer( index );
        SetButtonState( false );
        _quizTimer.CancelTimer();
        _scoreText.text = "Score: " + _scoreKeeper.CalculateScore() + "%";
    }


    private void DisplayAnswer(int index)
    {
        Image buttonImage;

        //TODO: Implement correct image vs. incorrect image
        if ( index == _currentQuestion.GetCorrectAnswerIndex() )
        {
            _questionText.text = "Correct!!!";
            buttonImage = _answerButtons[index].GetComponent<Image>();
            buttonImage.sprite = _correctAnswerSprite;
            _scoreKeeper.IncrementCorrectAnswers();
            _questionText.color = Color.green;
        }
        else
        {
            _correctAnswerIndex = _currentQuestion.GetCorrectAnswerIndex();
            string correctAnswer = _currentQuestion.GetAnswer( _correctAnswerIndex );
            _questionText.text = "Wrong!!! The Correct Answer is:\n" + correctAnswer;
            _questionText.color = Color.red;

            buttonImage = _answerButtons[_correctAnswerIndex].GetComponent<Image>();
            buttonImage.sprite = _correctAnswerSprite;
        }
    }


    void SetButtonState(bool state)
    {
        for( int i = 0; i < _answerButtons.Length; i++ )
        {
            Button button = _answerButtons[i].GetComponent<Button>();
            button.interactable = state;
        }
    }


    void SetDefaultButtonSprite()
    {
        for( int i = 0; i < _answerButtons.Length; i++ )
        {
            Image buttonImage = _answerButtons[i].GetComponent<Image>();
            buttonImage.sprite = _defaultAnswerSprite;
        }
    }
}
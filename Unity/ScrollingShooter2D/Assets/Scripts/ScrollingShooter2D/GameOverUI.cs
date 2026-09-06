using TMPro;
using UnityEngine;

public class GameOverUI : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _scoreText;

    ScoreKeeper _scoreKeeper;


    void Awake()
    {
        _scoreKeeper = FindAnyObjectByType<ScoreKeeper>();
    }
    

    void Start()
    {
        _scoreText.text = "You Scored:\n" + _scoreKeeper.GetCurrentScore();
    }
}
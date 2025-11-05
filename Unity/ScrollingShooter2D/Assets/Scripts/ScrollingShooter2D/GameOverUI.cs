using TMPro;
using UnityEngine;

public class GameOverUI : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _scoreText;

    ScoreKeeper _scoreKeeper;


    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<ScoreKeeper>();
    }
    

    void Start()
    {
        _scoreText.text = "You Scored:\n" + _scoreKeeper.GetCurrentScore();
    }
}
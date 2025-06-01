using TMPro;
using UnityEngine;

public class ScrollingShooter2DGameOverUI : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _scoreText;

    ScrollingShooter2DScoreKeeper _scoreKeeper;


    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<ScrollingShooter2DScoreKeeper>();
    }
    

    void Start()
    {
        _scoreText.text = "You Scored:\n" + _scoreKeeper.GetCurrentScore();
    }
}
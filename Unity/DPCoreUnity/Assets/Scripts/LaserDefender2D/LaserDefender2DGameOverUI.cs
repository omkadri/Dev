using TMPro;
using UnityEngine;

public class LaserDefender2DGameOverUI : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _scoreText;

    LaserDefender2DScoreKeeper _scoreKeeper;


    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeper>();
    }
    

    void Start()
    {
        _scoreText.text = "You Scored:\n" + _scoreKeeper.GetCurrentScore();
    }
}
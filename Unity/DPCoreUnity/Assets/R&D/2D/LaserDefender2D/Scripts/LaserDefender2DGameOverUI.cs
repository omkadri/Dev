using TMPro;
using UnityEngine;

public class LaserDefender2DGameOverUI : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI scoreText;
    LaserDefender2DScoreKeeper scoreKeeper;


    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeper>();
    }
    

    void Start()
    {
        scoreText.text = "You Scored:\n" + scoreKeeper.GetCurrentScore();
    }
}
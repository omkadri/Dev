using TMPro;
using UnityEngine;

public class LaserDefender2DGameOverUIGDTV : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI scoreText;
    LaserDefender2DScoreKeeperGDTV scoreKeeper;

    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeperGDTV>();
    }
    
    void Start()
    {
        scoreText.text = "You Scored:\n" + scoreKeeper.GetCurrentScore();
    }
}

using TMPro;
using UnityEngine;

public class GDTVLaserDefender2DGameOverUI : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI scoreText;
    GDTVLaserDefender2DScoreKeeper scoreKeeper;

    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<GDTVLaserDefender2DScoreKeeper>();
    }
    
    void Start()
    {
        scoreText.text = "You Scored:\n" + scoreKeeper.GetCurrentScore();
    }
}

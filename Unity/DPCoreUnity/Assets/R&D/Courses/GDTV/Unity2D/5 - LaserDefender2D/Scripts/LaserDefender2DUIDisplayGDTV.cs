using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LaserDefender2DUIDisplayGDTV : MonoBehaviour
{
    [Header( "Health" )]
    [SerializeField] Slider healthSlider;
    [SerializeField] LaserDefender2DHealthGDTV playerHealth;

    [Header( "Score" )]
    [SerializeField] TextMeshProUGUI scoreText;
    LaserDefender2DScoreKeeperGDTV scoreKeeper;

    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeperGDTV>();
    }

    void Start()
    {
        healthSlider.maxValue = playerHealth.GetHealth();
    }

    void Update()
    {
        healthSlider.value = playerHealth.GetHealth();
        scoreText.text = scoreKeeper.GetCurrentScore().ToString("000000000");
    }
}

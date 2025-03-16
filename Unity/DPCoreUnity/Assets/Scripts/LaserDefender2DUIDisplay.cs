using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LaserDefender2DUIDisplay : MonoBehaviour
{
    [Header( "Health" )]
    [SerializeField] Slider healthSlider;
    [SerializeField] LaserDefender2DHealth playerHealth;


    [Header( "Score" )]
    [SerializeField] TextMeshProUGUI scoreText;
    LaserDefender2DScoreKeeper scoreKeeper;


    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeper>();
    }


    void Start()
    {
        healthSlider.maxValue = playerHealth.GetHealth();
    }


    void Update()
    {
        healthSlider.value = playerHealth.GetHealth();
        scoreText.text = scoreKeeper.GetCurrentScore().ToString( "000000000" );
    }
}
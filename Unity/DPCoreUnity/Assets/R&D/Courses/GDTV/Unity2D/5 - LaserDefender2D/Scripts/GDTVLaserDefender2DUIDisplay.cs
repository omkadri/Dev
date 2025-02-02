using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GDTVLaserDefender2DUIDisplay : MonoBehaviour
{
    [Header( "Health" )]
    [SerializeField] Slider healthSlider;
    [SerializeField] GDTVLaserDefender2DHealth playerHealth;

    [Header( "Score" )]
    [SerializeField] TextMeshProUGUI scoreText;
    GDTVLaserDefender2DScoreKeeper scoreKeeper;


    void Awake()
    {
        scoreKeeper = FindFirstObjectByType<GDTVLaserDefender2DScoreKeeper>();
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
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LaserDefender2DUIDisplay : MonoBehaviour
{
    [Header( "Health" )]
    [SerializeField] Slider _healthSlider;
    [SerializeField] LaserDefender2DHealth _playerHealth;

    [Header( "Score" )]
    [SerializeField] TextMeshProUGUI _scoreText;
    LaserDefender2DScoreKeeper _scoreKeeper;


    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeper>();
    }


    void Start()
    {
        _healthSlider.maxValue = _playerHealth.GetHealth();
    }


    void Update()
    {
        _healthSlider.value = _playerHealth.GetHealth();
        _scoreText.text = _scoreKeeper.GetCurrentScore().ToString( "000000000" );
    }
}
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ScrollingShooter2DUIDisplay : MonoBehaviour
{
    [Header( "Health" )]
    [SerializeField] Slider _healthSlider;
    [SerializeField] ScrollingShooter2DHealth _playerHealth;

    [Header( "Score" )]
    [SerializeField] TextMeshProUGUI _scoreText;
    ScrollingShooter2DScoreKeeper _scoreKeeper;


    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<ScrollingShooter2DScoreKeeper>();
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
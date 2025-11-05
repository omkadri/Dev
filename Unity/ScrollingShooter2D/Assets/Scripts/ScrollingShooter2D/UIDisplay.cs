using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIDisplay : MonoBehaviour
{
    [Header("Health")]
    [SerializeField] Slider _healthSlider;
    [SerializeField] Health _playerHealth;

    [Header("Score")]
    [SerializeField] TextMeshProUGUI _scoreText;
    ScoreKeeper _scoreKeeper;


    void Awake()
    {
        _scoreKeeper = FindFirstObjectByType<ScoreKeeper>();
    }


    void Start()
    {
        _healthSlider.maxValue = _playerHealth.GetHealth();
    }


    void Update()
    {
        _healthSlider.value = _playerHealth.GetHealth();
        _scoreText.text = _scoreKeeper.GetCurrentScore().ToString("000000000");
    }
}
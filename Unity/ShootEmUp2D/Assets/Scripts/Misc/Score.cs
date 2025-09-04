using UnityEngine;
using TMPro;

public class Score : MonoBehaviour
{
    int _currentScore = 0;
    TMP_Text _scoreText;


    void Awake()
    {
        _scoreText = GetComponent<TMP_Text>();  
    }


    void OnEnable()
    {
        Health.OnDeath += EnemyDestroyed;
    }


    void OnDisable()
    {
        Health.OnDeath -= EnemyDestroyed;
    }


    void EnemyDestroyed(Health sender)
    {
        _currentScore++;
        _scoreText.text = _currentScore.ToString("D3");
    }
}
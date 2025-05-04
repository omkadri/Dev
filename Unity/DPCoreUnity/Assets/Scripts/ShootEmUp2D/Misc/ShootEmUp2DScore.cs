using UnityEngine;
using TMPro;

public class ShootEmUp2DScore : MonoBehaviour
{
    int _currentScore = 0;
    TMP_Text _scoreText;


    void Awake()
    {
        _scoreText = GetComponent<TMP_Text>();  
    }


    void OnEnable()
    {
        ShootEmUp2DHealth.OnDeath += EnemyDestroyed;
    }


    void OnDisable()
    {
        ShootEmUp2DHealth.OnDeath -= EnemyDestroyed;
    }


    void EnemyDestroyed( ShootEmUp2DHealth sender )
    {
        _currentScore++;
        _scoreText.text = _currentScore.ToString( "D3" );
    }
}
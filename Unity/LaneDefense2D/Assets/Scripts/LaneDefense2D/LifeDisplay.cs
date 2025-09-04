using System;
using UnityEngine;
using UnityEngine.UI;

public class LifeDisplay : MonoBehaviour
{
    [SerializeField] float _baseLifePoints = 3f;
    [SerializeField] int _damage = 1;
    [SerializeField] string _gameOverSceneName;

    float _lifePoints;
    Text _livesText;

    void Awake()
    {
        _livesText = GetComponent<Text>();
    }


    void Start()
    {
        _lifePoints = _baseLifePoints - PlayerPrefsController.GetDifficulty();
        UpdateDisplay();
    }


    void Update()
    {

    }


    void UpdateDisplay()
    {
        _livesText.text = _lifePoints.ToString();
    }


    public void TakeLife()
    {
        _lifePoints -= _damage;
        UpdateDisplay();

        if (_lifePoints <= 0)
        {
            FindFirstObjectByType<LevelController>().HandleLoseConditionRoutine();
        }
    }
}
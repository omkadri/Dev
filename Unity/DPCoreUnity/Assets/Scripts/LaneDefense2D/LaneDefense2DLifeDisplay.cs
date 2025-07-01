using System;
using UnityEngine;
using UnityEngine.UI;

public class LaneDefense2DLifeDisplay : MonoBehaviour
{

    [SerializeField] int _lifePoints = 5;
    [SerializeField] int _damage = 1;
    [SerializeField] string _gameOverSceneName;

    Text _livesText;

    void Awake()
    {
        _livesText = GetComponent<Text>();
    }


    void Start()
    {
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
            FindFirstObjectByType<LaneDefense2DLevelController>().HandleLoseConditionRoutine();
        }
    }
}
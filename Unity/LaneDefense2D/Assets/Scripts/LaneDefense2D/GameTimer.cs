using UnityEngine;
using UnityEngine.UI;

public class GameTimer : MonoBehaviour
{
    [Tooltip(" Level Timer in Seconds ")]
    [SerializeField] float _levelTime = 10;
    bool _triggerLevelFinished = false;

    void Update()
    {
        if (_triggerLevelFinished) { return; }
        
        GetComponent<Slider>().value = Time.timeSinceLevelLoad / _levelTime;

        bool timerFinished = (Time.timeSinceLevelLoad >= _levelTime);
        if (timerFinished)
        {
            Debug.Log("level timer expired");
            FindFirstObjectByType<LevelController>().LevelTimerFinished(); //TODO: Fix Tight Coupling
            _triggerLevelFinished = true;
        }
    }
}
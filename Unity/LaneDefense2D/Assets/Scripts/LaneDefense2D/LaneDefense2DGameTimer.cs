using UnityEngine;
using UnityEngine.UI;

public class LaneDefense2DGameTimer : MonoBehaviour
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
            FindFirstObjectByType<LaneDefense2DLevelController>().LevelTimerFinished(); //TODO: Fix Tight Coupling
            _triggerLevelFinished = true;
        }
    }
}
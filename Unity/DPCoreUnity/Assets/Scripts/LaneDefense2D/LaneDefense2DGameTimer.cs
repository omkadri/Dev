using UnityEngine;
using UnityEngine.UI;

public class LaneDefense2DGameTimer : MonoBehaviour
{
    [Tooltip(" Level Timer in Seconds ")]
    [SerializeField] float _levelTime = 10;

    void Update()
    {
        GetComponent<Slider>().value = Time.timeSinceLevelLoad / _levelTime;

        bool timerFinished = (Time.timeSinceLevelLoad >= _levelTime);
        if (timerFinished)
        {
            Debug.Log("level timer expired");
        }
    }
}
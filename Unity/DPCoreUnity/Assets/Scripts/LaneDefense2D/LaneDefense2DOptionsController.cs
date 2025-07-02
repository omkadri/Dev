using UnityEngine;
using UnityEngine.UI;

public class LaneDefense2DOptionsController : MonoBehaviour
{
    [SerializeField] Slider _volumeSlider;
    [SerializeField] float _defaultVolume = 0.8f;


    void Start()
    {
        _volumeSlider.value = LaneDefense2DPlayerPrefsController.GetMasterVolume();
    }

    void Update()
    {
        var musicPlayer = FindFirstObjectByType<LaneDefense2DMusicPlayer>();//TODO: improve this
        if (musicPlayer)
        {
            musicPlayer.SetVolume(_volumeSlider.value);
        }
        else
        {
            Debug.LogWarning("No music player found....");
        }
    }


    public void SaveAndExit()
    {
        LaneDefense2DPlayerPrefsController.SetMasterVolume(_volumeSlider.value);
        FindFirstObjectByType<LaneDefense2DLevelController>().LoadMainMenuScene(); //TODO: Fix Tight Coupling
    }


    public void SetDefaultOptions()
    {
        _volumeSlider.value = _defaultVolume;
    }
}
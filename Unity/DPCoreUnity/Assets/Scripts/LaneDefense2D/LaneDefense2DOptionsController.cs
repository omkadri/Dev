using UnityEngine;
using UnityEngine.UI;

public class LaneDefense2DOptionsController : MonoBehaviour
{
    [SerializeField] Slider _volumeSlider;
    [SerializeField] float _defaultVolume = 0.8f;

    [SerializeField] Slider _difficultySlider;
    [SerializeField] float _defaultDifficulty = 0f;


    void Start()
    {
        _volumeSlider.value = LaneDefense2DPlayerPrefsController.GetMasterVolume();
        _difficultySlider.value = LaneDefense2DPlayerPrefsController.GetDifficulty();
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
        LaneDefense2DPlayerPrefsController.SetDifficulty(_difficultySlider.value);
        FindFirstObjectByType<LaneDefense2DLevelController>().LoadMainMenuScene(); //TODO: Fix Tight Coupling
    }


    public void SetDefaultOptions()
    {
        _volumeSlider.value = _defaultVolume;
        _difficultySlider.value = _defaultDifficulty;
    }
}
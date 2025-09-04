using UnityEngine;
using UnityEngine.UI;

public class OptionsController : MonoBehaviour
{
    [SerializeField] Slider _volumeSlider;
    [SerializeField] float _defaultVolume = 0.8f;

    [SerializeField] Slider _difficultySlider;
    [SerializeField] float _defaultDifficulty = 0f;


    void Start()
    {
        _volumeSlider.value = PlayerPrefsController.GetMasterVolume();
        _difficultySlider.value = PlayerPrefsController.GetDifficulty();
    }

    void Update()
    {
        var musicPlayer = FindFirstObjectByType<MusicPlayer>();//TODO: improve this
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
        PlayerPrefsController.SetMasterVolume(_volumeSlider.value);
        PlayerPrefsController.SetDifficulty(_difficultySlider.value);
        FindFirstObjectByType<LevelController>().LoadMainMenuScene(); //TODO: Fix Tight Coupling
    }


    public void SetDefaultOptions()
    {
        _volumeSlider.value = _defaultVolume;
        _difficultySlider.value = _defaultDifficulty;
    }
}
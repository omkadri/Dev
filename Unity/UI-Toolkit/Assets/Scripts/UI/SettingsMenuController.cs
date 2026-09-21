using UnityEngine;
using UnityEngine.UIElements;

//[RequireComponent(typeof(PanelRenderer))]

public class SettingsMenuController : MonoBehaviour
{
    PanelRenderer _panelRenderer;
    
    Button _backButton;
    Slider _volumeSlider;
    DropdownField _difficultyDropdown;

    void Awake()
    {
        _panelRenderer = GetComponent<PanelRenderer>();
    }

    void Start()
    {
        AudioListener.volume = PlayerPrefs.GetFloat("Volume", 0.5f);
    }

    void OnEnable()
    {
        _panelRenderer.RegisterUIReloadCallback(HandleUILoad); //This ensures that the root visual element will be populated and set up through the normal unity workflow
    }

    void OnDisable()
    {
        _panelRenderer.UnregisterUIReloadCallback(HandleUILoad); //this ensures we do not have duplicate callbacks
    }

    void HandleUILoad(PanelRenderer _, VisualElement rootElement, int __)
    {
        _backButton = rootElement.Q<Button>("back-button");
        _volumeSlider = rootElement.Q<Slider>("volume-slider");
        _difficultyDropdown = rootElement.Q<DropdownField>("difficulty-dropdown");
        
        _difficultyDropdown.index = PlayerPrefs.GetInt("Difficulty", 0);
        _volumeSlider.value = PlayerPrefs.GetFloat("Volume", 0.5f);

        _volumeSlider.RegisterValueChangedCallback(HandleVolumeChanged);
        _difficultyDropdown.RegisterValueChangedCallback(HandleDifficultyChanged);
    }

    void HandleDifficultyChanged(ChangeEvent<string> _)
    {
        PlayerPrefs.SetInt("Difficulty", _difficultyDropdown.index);
        PlayerPrefs.Save();
    }

    void HandleVolumeChanged(ChangeEvent<float> evt)
    {
        AudioListener.volume = evt.newValue;
        PlayerPrefs.SetFloat("Volume", evt.newValue);
        PlayerPrefs.Save();
    }
}

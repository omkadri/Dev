using UnityEngine;
using UnityEngine.UIElements;

[RequireComponent(typeof(PanelRenderer))]

public class MainMenuController : MonoBehaviour
{
    PanelRenderer _panelRenderer;

    VisualElement _buttonContainer;
    VisualElement _settingsContainer;
    Button _settingsBackButton;

    Button _playButton;
    Button _settingsButton;
    Button _quitButton;

    void Awake()
    {
        _panelRenderer = GetComponent<PanelRenderer>();
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
        _buttonContainer = rootElement.Q("button-container"); //for queries, VisualElements do not need to be specified
        _settingsContainer = rootElement.Q("settings-menu");
        _settingsBackButton = rootElement.Q<Button>("settings-back");
        
        _playButton = rootElement.Q<Button>("play-button"); //Q is shot for Query. This is how we find our UI elements
        _settingsButton = rootElement.Q<Button>("settings-button");
        _quitButton = rootElement.Q<Button>("quit-button");
        
        _playButton.RegisterCallback<ClickEvent>(HandlePlayClicked);
        _settingsButton.RegisterCallback<ClickEvent>(HandleSettingsClicked);
        _settingsBackButton.RegisterCallback<ClickEvent>(HandleSettingsBackClicked);
        _quitButton.RegisterCallback<ClickEvent>(HandleQuitClicked);
    }

    void HandleSettingsBackClicked(ClickEvent evt)
    {
        _buttonContainer.RemoveFromClassList("hidden");
        _settingsContainer.AddToClassList("hidden");
    }

    void HandlePlayClicked(ClickEvent _)
    {
        Debug.Log("Play Was Clicked");
    }

    void HandleSettingsClicked(ClickEvent _)
    {
        _buttonContainer.AddToClassList("hidden");
        _settingsContainer.RemoveFromClassList("hidden");
    }

    void HandleQuitClicked(ClickEvent _)
    {
        Debug.Log("Quit Was Clicked");
    }
}

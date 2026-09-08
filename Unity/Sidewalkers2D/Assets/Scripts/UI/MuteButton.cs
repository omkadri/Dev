using UnityEngine;
using UnityEngine.UI;

public class MuteButton : MonoBehaviour
{
    [SerializeField] AudioSource _backgroundMusic;
    [SerializeField] Sprite _muteIcon;
    [SerializeField] Sprite _unmuteIcon;

    Image _image;

    void Awake()
    {
        _image = GetComponent<Image>();
        UpdateIcon();
    }

    public void ToggleMute()
    {
        _backgroundMusic.mute = !_backgroundMusic.mute;
        UpdateIcon();
    }

    void UpdateIcon()
    {
        _image.sprite = _backgroundMusic.mute ? _muteIcon : _unmuteIcon;
    }
}
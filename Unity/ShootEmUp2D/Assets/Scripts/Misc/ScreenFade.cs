using UnityEngine;
using UnityEngine.UI;
using Unity.Cinemachine;
using System.Collections;
using Unity.Mathematics;
using Unity.VisualScripting;

public class ScreenFade : MonoBehaviour
{
    [SerializeField] float _fadeTime = 1.5f;
    [SerializeField] GameObject _playerPrefab;
    [SerializeField] Transform _respawnPoint;

    Image _image;
    CinemachineCamera _camera;


    void Awake()
    {
        _image = GetComponent<Image>();
        _camera = FindFirstObjectByType<CinemachineCamera>();
    }


    public void FadeInAndOut()//TODO: Better name
    {
        StartCoroutine(FadeInRoutine());
    }


    IEnumerator FadeInRoutine()//TODO: Better name
    {
        yield return StartCoroutine(FadeRoutine(1f));
        RespawnPlayer();
        StartCoroutine(FadeRoutine(0f));
    }


    IEnumerator FadeRoutine(float targetAlpha)//TODO: Better Name
    {
        float elapsedTime = 0f;
        float startValue = _image.color.a;

        while(elapsedTime < _fadeTime)
        {
            elapsedTime += Time.deltaTime;
            float newAlpha = Mathf.Lerp(startValue, targetAlpha, elapsedTime / _fadeTime);
            _image.color = new Color(_image.color.r, _image.color.g, _image.color.b, newAlpha);
            yield return null;
        }

        _image.color = new Color(_image.color.r, _image.color.g, _image.color.b, targetAlpha); //Lerping floats can be imprecise. this ensures the target alpha is set at the end
    }


    void RespawnPlayer()//TODO: Make this seperate from the screen fade
    {
        Transform player = Instantiate(_playerPrefab, _respawnPoint.position, quaternion.identity).transform;
        _camera.Follow = player;
    }
}
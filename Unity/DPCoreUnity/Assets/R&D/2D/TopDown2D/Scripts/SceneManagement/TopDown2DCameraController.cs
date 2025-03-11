using UnityEngine;
using Unity.Cinemachine;

public class TopDown2DCameraController : Singleton<TopDown2DCameraController>
{
    CinemachineCamera cinemachineCamera;


    void Start()
    {
        SetPlayerCameraFollow();
    }


    public void SetPlayerCameraFollow()
    {
        cinemachineCamera = FindFirstObjectByType<CinemachineCamera>();
        cinemachineCamera.Follow = TopDown2DPlayerController.Instance.transform;
    }
}
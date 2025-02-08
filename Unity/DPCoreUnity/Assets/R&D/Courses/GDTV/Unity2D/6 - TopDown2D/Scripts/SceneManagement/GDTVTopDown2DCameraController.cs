using UnityEngine;
using Unity.Cinemachine;

public class GDTVTopDown2DCameraController : GDTVSingleton<GDTVTopDown2DCameraController>
{
    CinemachineCamera cinemachineCamera;


    void Start()
    {
        SetPlayerCameraFollow();
    }


    public void SetPlayerCameraFollow()
    {
        cinemachineCamera = FindFirstObjectByType<CinemachineCamera>();
        cinemachineCamera.Follow = GDTVTopDown2DPlayerController.Instance.transform;
    }
}
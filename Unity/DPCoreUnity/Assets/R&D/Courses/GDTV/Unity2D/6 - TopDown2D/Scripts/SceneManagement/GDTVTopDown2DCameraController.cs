using UnityEngine;
using Unity.Cinemachine;

public class GDTVTopDown2DCameraController : GDTVSingleton<GDTVTopDown2DCameraController>
{
    CinemachineCamera cinemachineCamera;


    public void SetPlayerCameraFollow()
    {
        cinemachineCamera = FindFirstObjectByType<CinemachineCamera>();
        cinemachineCamera.Follow = GDTVTopDown2DPlayerController.Instance.transform;
    }
}

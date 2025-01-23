using UnityEngine;
using Unity.Cinemachine;

public class GDTVTopDownAction2DCameraController : GDTVSingleton<GDTVTopDownAction2DCameraController>
{
    CinemachineCamera cinemachineCamera;


    public void SetPlayerCameraFollow()
    {
        cinemachineCamera = FindFirstObjectByType<CinemachineCamera>();
        cinemachineCamera.Follow = GDTVTopDownAction2DPlayerController.Instance.transform;
    }
}

using UnityEngine;
using Unity.Cinemachine;

public class GDTVTopDown2DScreenShakeManager : GDTVSingleton<GDTVTopDown2DScreenShakeManager>
{
    CinemachineImpulseSource source;

    protected override void Awake()
    {
        base.Awake();

        source = GetComponent<CinemachineImpulseSource>();
    }


    public void ShakeScreen()
    {
        source.GenerateImpulse();
    }
}
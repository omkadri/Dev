using UnityEngine;
using Unity.Cinemachine;

public class TopDown2DScreenShakeManager : Singleton<TopDown2DScreenShakeManager>
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
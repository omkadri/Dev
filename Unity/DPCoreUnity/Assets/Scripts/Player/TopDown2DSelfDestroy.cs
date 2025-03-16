using UnityEngine;

public class TopDown2DSwordSelfDestroy : MonoBehaviour
{
    ParticleSystem ps;

    void Awake()
    {
        ps = GetComponent<ParticleSystem>();
    }


    void Update()
    {
        if ( ps && !ps.IsAlive() )
        {
            DestroySelfAnimEvent();
        }
    }


    public void DestroySelfAnimEvent()
    {
        Destroy( gameObject );
    }
}
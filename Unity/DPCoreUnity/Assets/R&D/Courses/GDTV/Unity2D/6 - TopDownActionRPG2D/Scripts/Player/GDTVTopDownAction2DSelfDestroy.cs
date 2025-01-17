using UnityEngine;

public class GDTVTopDownAction2DSwordSelfDestroy : MonoBehaviour
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
            DestroySelf();
        }
    }


    public void DestroySelf()
    {
        Destroy( gameObject );
    }
}

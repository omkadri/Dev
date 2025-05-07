using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DShooter : MonoBehaviour
{
    [SerializeField] GameObject _projectile;
    [SerializeField] GameObject _gun;
    
    
    public void Fire()
    {
        Instantiate( _projectile, _gun.transform.position, transform.rotation ); //notice how we are instantiating at the gun's transform position
    }
}

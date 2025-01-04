using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DShooter : MonoBehaviour
{
    [SerializeField] GameObject projectile, gun;// Serialized fields of the same object type can be declared on the same line
    public void Fire()
    {
        Instantiate(projectile, gun.transform.position, transform.rotation); //notice how we are instantiating at the gun's transform position
    }
}

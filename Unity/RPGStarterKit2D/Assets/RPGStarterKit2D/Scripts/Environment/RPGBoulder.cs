using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPGBoulder : MonoBehaviour
{
    // Will only be destroyed by bomb.  See AttackDamage.cs
    public void DestroyBoulder() {
        Destroy(gameObject);
    }
}

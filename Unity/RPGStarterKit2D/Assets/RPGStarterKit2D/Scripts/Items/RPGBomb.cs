using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPGBomb : MonoBehaviour
{
    [SerializeField] private GameObject explodePrefab;

    // Use in Bomb animation
    public void Explode() {
        GameObject newBomb = Instantiate(explodePrefab, transform.position, transform.rotation);
        newBomb.GetComponent<RPGAttackDamage>().isBombExplosion = true;
        Destroy(gameObject);
    }
}

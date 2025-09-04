using UnityEngine;

public class GrapeLandSplatter : MonoBehaviour
{
    SpriteFade spriteFade;


    void Awake()
    {
        spriteFade = GetComponent<SpriteFade>();
    }


    void Start()
    {
        StartCoroutine(spriteFade.SlowFadeRoutine());

        Invoke("DisableCollider", 0.2f);//TODO: fix magic number
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        PlayerHealth playerHealth = other.gameObject.GetComponent<PlayerHealth>();
        playerHealth?.TakeDamage(1, transform);//TODO: fix magic number
    }


    void DisableCollider()
    {
        GetComponent<CapsuleCollider2D>().enabled = false;
    }
}
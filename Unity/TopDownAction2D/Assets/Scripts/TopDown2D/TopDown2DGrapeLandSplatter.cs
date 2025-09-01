using UnityEngine;

public class TopDown2DGrapeLandSplatter : MonoBehaviour
{
    TopDown2DSpriteFade spriteFade;


    void Awake()
    {
        spriteFade = GetComponent<TopDown2DSpriteFade>();
    }


    void Start()
    {
        StartCoroutine(spriteFade.SlowFadeRoutine());

        Invoke("DisableCollider", 0.2f);//TODO: fix magic number
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        TopDown2DPlayerHealth playerHealth = other.gameObject.GetComponent<TopDown2DPlayerHealth>();
        playerHealth?.TakeDamage(1, transform);//TODO: fix magic number
    }


    void DisableCollider()
    {
        GetComponent<CapsuleCollider2D>().enabled = false;
    }
}
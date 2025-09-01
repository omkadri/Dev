using System.Collections;
using UnityEngine;

public class TopDown2DKnockback : MonoBehaviour
{
    public bool gettingKnockedBack;
    
    [SerializeField] float knockbackTime = 0.2f;

    Rigidbody2D rb2d;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }


    public void GetKnockback(Transform damageSource, float knockbackThrust)
    {
        gettingKnockedBack = true;
        Vector2 difference = (transform.position - damageSource.position).normalized * knockbackThrust * rb2d.mass;
        rb2d.AddForce(difference, ForceMode2D.Impulse);
        StartCoroutine(KnockbackRoutine());
    }


    IEnumerator KnockbackRoutine()
    {
        yield return new WaitForSeconds(knockbackTime);
        rb2d.linearVelocity = Vector2.zero;
        gettingKnockedBack = false;
    }
}

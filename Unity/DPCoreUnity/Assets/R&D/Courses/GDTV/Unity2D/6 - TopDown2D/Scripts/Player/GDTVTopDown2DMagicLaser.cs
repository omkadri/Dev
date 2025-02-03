using System.Collections;
using UnityEngine;

public class GDTVTopDown2DMagicLaser : MonoBehaviour
{
    [SerializeField] float laserGrowTime = 2f;

    float laserRange;
    SpriteRenderer spriteRenderer;
    CapsuleCollider2D capsuleCollider2D;


    void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        capsuleCollider2D = GetComponent<CapsuleCollider2D>();
    }


    void Start()
    {
        LaserFaceMouse();
    }


    public void UpdateLaserRange( float laserRange )
    {
        this.laserRange = laserRange;
        StartCoroutine( IncreaseLaserLengthRoutine() );
    }


    IEnumerator IncreaseLaserLengthRoutine()
    {
        float timePassed = 0;

        while ( spriteRenderer.size.x < laserRange )
        {
            timePassed += Time.deltaTime;
            float linaerT = timePassed / laserGrowTime;

            //sprite
            spriteRenderer.size = new Vector2( Mathf.Lerp( 1, laserRange, linaerT ), 1f );

            //collider
            capsuleCollider2D.size = new Vector2( Mathf.Lerp( 1f, laserRange, linaerT ), capsuleCollider2D.size.y );
            capsuleCollider2D.offset = new Vector2( Mathf.Lerp( 1f, laserRange, linaerT ) / 2, capsuleCollider2D.offset.y ); // dividing by 2 is the key to making the collider offset line up with the sprite size

            yield return null;
        }
        StartCoroutine( GetComponent<GDTVTopDown2DSpriteFade>().SlowFadeRoutine() );
    }


    void LaserFaceMouse()
    {
        Vector3 mousePos = Camera.main.ScreenToWorldPoint( Input.mousePosition );
        Vector2 dir = transform.position - mousePos;
        transform.right = -dir;
    }
}
using System.Collections;
using UnityEngine;

public class TopDown2DStaffLaser : MonoBehaviour
{
    [SerializeField] float _laserGrowTime = 0.22f;

    bool _isGrowing = true;
    float _laserRange;
    SpriteRenderer _spriteRenderer;
    CapsuleCollider2D _capsuleCollider2D;


    void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _capsuleCollider2D = GetComponent<CapsuleCollider2D>();
    }


    void Start()
    {
        LaserFaceMouse();
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.GetComponent<TopDown2DIndestructible>() && !other.isTrigger)
        {
            _isGrowing = false;
        }
    }


    public void UpdateLaserRange(float laserRange)
    {
        this._laserRange = laserRange;
        StartCoroutine(IncreaseLaserLengthRoutine());
    }


    IEnumerator IncreaseLaserLengthRoutine()
    {
        float timePassed = 0;

        while (_spriteRenderer.size.x < _laserRange && _isGrowing)
        {
            timePassed += Time.deltaTime;
            float linaerT = timePassed / _laserGrowTime;

            //sprite
            _spriteRenderer.size = new Vector2(Mathf.Lerp(1, _laserRange, linaerT), 1f);

            //collider
            _capsuleCollider2D.size = new Vector2(Mathf.Lerp(1f, _laserRange, linaerT), _capsuleCollider2D.size.y);
            _capsuleCollider2D.offset = new Vector2(Mathf.Lerp(1f, _laserRange, linaerT) / 2, _capsuleCollider2D.offset.y); // dividing by 2 is the key to making the collider offset line up with the sprite size

            yield return null;
        }
        StartCoroutine(GetComponent<TopDown2DSpriteFade>().SlowFadeRoutine());
    }


    void LaserFaceMouse()
    {
        Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        Vector2 dir = transform.position - mousePos;
        transform.right = -dir;
    }
}
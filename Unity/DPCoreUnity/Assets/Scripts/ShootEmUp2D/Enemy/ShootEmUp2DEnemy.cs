using System.Collections;
using UnityEngine;

public class ShootEmUp2DEnemy : MonoBehaviour, IDamageable
{
    [SerializeField] float _jumpForce = 7f;
    [SerializeField] float _jumpInterval = 4f;
    [SerializeField] float _changeDirInterval = 3f;

    Rigidbody2D _rb2d;
    ShootEmUp2DMovement _movement;
    ShootEmUp2DColorChanger _colorChanger;
    ShootEmUp2DKnockback _knockback;
    ShootEmUp2DDamageFlash _flash;
    ShootEmUp2DHealth _health;


    void Awake()
    {
        _rb2d = GetComponent<Rigidbody2D>();
        _movement = GetComponent<ShootEmUp2DMovement>();
        _colorChanger = GetComponent<ShootEmUp2DColorChanger>();
        _knockback = GetComponent<ShootEmUp2DKnockback>();
        _flash = GetComponent<ShootEmUp2DDamageFlash>();
        _health = GetComponent<ShootEmUp2DHealth>();
    }


    void Start() 
    {
        StartCoroutine(ChangeDirectionRoutine());
        StartCoroutine(RandomJumpRoutine());
    }


    public void Init( Color color )
    {
        _colorChanger.SetDefaultColor( color );
    }


    IEnumerator ChangeDirectionRoutine()
    {
        while (true)
        {
            float currentDir = UnityEngine.Random.Range(0, 2) * 2 - 1; // 1 or -1
            _movement.SetCurrentDirection( currentDir );
            yield return new WaitForSeconds(_changeDirInterval);
        }
    }


    IEnumerator RandomJumpRoutine() 
    {
        while (true)
        {
            yield return new WaitForSeconds(_jumpInterval);
            float randomDir = Random.Range(-1, 1);
            Vector2 jumpDir = new Vector2(randomDir, 1f).normalized;
            _rb2d.AddForce(jumpDir * _jumpForce, ForceMode2D.Impulse);
        }
    }

    public void TakeDamage( int damageAmount, float knockbackThrust )
    {
        _health.TakeDamage( damageAmount );
        _knockback.ActivateKnockback( ShootEmUp2DPlayerController.Instance.transform.position, knockbackThrust );
    }

    public void TakeHit()
    {
        _flash.StartFlash();
    }
}
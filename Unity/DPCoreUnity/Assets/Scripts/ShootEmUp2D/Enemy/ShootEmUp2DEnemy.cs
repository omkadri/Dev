using System.Collections;
using UnityEngine;

public class ShootEmUp2DEnemy : MonoBehaviour
{
    [SerializeField] float _jumpForce = 7f;
    [SerializeField] float _jumpInterval = 4f;
    [SerializeField] float _changeDirInterval = 3f;
    [SerializeField] int _damageAmount = 1;
    [SerializeField] float _knockbackThrust = 25f;

    Rigidbody2D _rb2d;
    ShootEmUp2DMovement _movement;
    ShootEmUp2DColorChanger _colorChanger;


    void Awake()
    {
        _rb2d = GetComponent<Rigidbody2D>();
        _movement = GetComponent<ShootEmUp2DMovement>();
        _colorChanger = GetComponent<ShootEmUp2DColorChanger>();
    }


    void Start() 
    {
        StartCoroutine(ChangeDirectionRoutine());
        StartCoroutine(RandomJumpRoutine());
    }


    void OnCollisionEnter2D( Collision2D other )
    {
        ShootEmUp2DPlayerController player = other.gameObject.GetComponent<ShootEmUp2DPlayerController>();

        if( !player )
        {
            return;
        }

        ShootEmUp2DMovement playerMovement = player.GetComponent<ShootEmUp2DMovement>();

        if ( playerMovement.CanMove )
        {
            IHitable iHitable = other.gameObject.GetComponent<IHitable>();
            iHitable?.TakeHit();

            IDamageable iDamageable = other.gameObject.GetComponent<IDamageable>();
            iDamageable?.TakeDamage( transform.position, _damageAmount, _knockbackThrust );

            ShootEmUp2DAudioManager.Instance.Enemy_OnPlayerHit(); //TODO: Need to create an event that this can subscribe to
        }
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
}
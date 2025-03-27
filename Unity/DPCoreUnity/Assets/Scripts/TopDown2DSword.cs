using System.Collections;
using UnityEngine;

public class TopDown2DSword : MonoBehaviour, TopDown2DIWeapon
{
    [SerializeField] GameObject _slashAnimPrefab;
    [SerializeField] TopDown2DWeaponInfoSO _weaponInfo;

    Animator _animator; 
    Transform _weaponCollider;
    Transform _slashAnimSpawnPoint;
    GameObject _slashAnim;


    void Awake()
    {
        _animator = GetComponent<Animator>();
    }


    void Start()
    {
        _weaponCollider = TopDown2DPlayerController.Instance.GetWeaponCollider();
        _slashAnimSpawnPoint = TopDown2DPlayerController.Instance.GetSlashAnimSpawnPoint();
    }


    void Update()
    {
        MouseFollowWithOffset();
    }


    public void Attack()
    {
        _animator.SetTrigger( "Attack" );
        _weaponCollider.gameObject.SetActive( true );
        _slashAnim = Instantiate( _slashAnimPrefab, _slashAnimSpawnPoint.position, Quaternion.identity );
        _slashAnim.transform.parent = this.transform.parent;
    }


    public TopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return _weaponInfo;
    }


    public void DoneAttackingAnimEvent()
    {
        _weaponCollider.gameObject.SetActive( false );
    }


    public void SwingUpFlipAnimEvent()
    {
        _slashAnim.gameObject.transform.rotation = Quaternion.Euler( -180, 0, 0 );

        if ( TopDown2DPlayerController.Instance.isFacingLeft )
        {
            _slashAnim.GetComponent<SpriteRenderer>().flipX = true;
        }
    }
    

    public void SwingDownFlipAnimEvent()
    {
        _slashAnim.gameObject.transform.rotation = Quaternion.Euler( 0, 0, 0 );

        if ( TopDown2DPlayerController.Instance.isFacingLeft )
        {
            _slashAnim.GetComponent<SpriteRenderer>().flipX = true;
        }
    }


    void MouseFollowWithOffset() //orients the sword relative to the mouse
    {
        Vector2 mousePos = Input.mousePosition;
        Vector2 playerPos = Camera.main.WorldToScreenPoint( TopDown2DPlayerController.Instance.transform.position );

        float angle = Mathf.Atan2( mousePos.y - playerPos.y, Mathf.Abs( mousePos.x - playerPos.x ) ) * Mathf.Rad2Deg;
        
        if ( mousePos.x < playerPos.x )
        {
            TopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, -180, angle );
            _weaponCollider.transform.rotation = Quaternion.Euler( 0, -180, 0 );
        }
        else
        {
            TopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, 0, angle );
            _weaponCollider.transform.rotation = Quaternion.Euler( 0, 0, 0 );
        }
    }
}

using UnityEngine;

public class GDTVTopDownAction2DSword : MonoBehaviour
{
    GDTVTopDownAction2DInputActions playerInputActions;
    Animator animator; 
    GDTVTopDownAction2DPlayerController playerController;
    GDTVTopDownAction2DActiveWeapon activeWeapon;

    void Awake()
    {
        playerController = GetComponentInParent<GDTVTopDownAction2DPlayerController>();
        activeWeapon = GetComponentInParent<GDTVTopDownAction2DActiveWeapon>();
        animator = GetComponent<Animator>();
        playerInputActions = new GDTVTopDownAction2DInputActions();
    }

    void OnEnable()
    {
        playerInputActions.Enable();
    }

    void Start()
    {
        playerInputActions.Combat.Attack.started += _ => Attack();
    }

    void Update()
    {
        MouseFollowWithOffset();
    }

    void Attack()
    {
        animator.SetTrigger( "Attack" );
    }

    void MouseFollowWithOffset() //orients the sword relative to the mouse
    {
        Vector2 mousePosition = Input.mousePosition;
        Vector2 playerPosition = Camera.main.WorldToScreenPoint( playerController.transform.position );

        float angle = Mathf.Atan2( mousePosition.y - playerPosition.y, Mathf.Abs( mousePosition.x - playerPosition.x ) ) * Mathf.Rad2Deg;
        
        if ( mousePosition.x < playerPosition.x )
        {
            activeWeapon.transform.rotation = Quaternion.Euler( 0, -180, angle );
        }
        else
        {
            activeWeapon.transform.rotation = Quaternion.Euler( 0, 0, angle );
        }
    }
}

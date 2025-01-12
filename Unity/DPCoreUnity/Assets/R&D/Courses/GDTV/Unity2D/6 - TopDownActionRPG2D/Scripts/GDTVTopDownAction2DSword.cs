using UnityEngine;

public class GDTVTopDownAction2DSword : MonoBehaviour
{
    GDTVTopDownAction2DInputActions playerInputActions;
    Animator animator; 

    void Awake()
    {
        playerInputActions = new GDTVTopDownAction2DInputActions();
    }

    void OnEnable()
    {
        animator = GetComponent<Animator>();
        playerInputActions.Enable();
    }

    void Start()
    {
        playerInputActions.Combat.Attack.started += _ => Attack();
    }

    void Attack()
    {
        animator.SetTrigger( "Attack" );
    }
}

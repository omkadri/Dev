using UnityEngine;
using UnityEngine.Scripting.APIUpdating;

public class TopDownActionRPG2DPlayerController : MonoBehaviour
{
    [SerializeField] float moveSpeed = 1f;

    private TopDownActionRPG2DInputActions playerInputActions;
    Vector2 movement;
    Rigidbody2D rb2d;

    void Awake()
    {
        playerInputActions = new TopDownActionRPG2DInputActions(); //TODO: add TopDownActionRPG2DInputActions as a component instead
        rb2d = GetComponent<Rigidbody2D>();
    }

    void OnEnable()
    {
        playerInputActions.Enable();
    }

    void Update()
    {
        PlayerInput();
    }

    void FixedUpdate()//we use this for handling physics
    {
        Move();
    }

    void PlayerInput()
    {
        movement = playerInputActions.Movement.Move.ReadValue<Vector2>();

        Debug.Log( movement.x );
    }

    void Move()
    {
        rb2d.MovePosition( rb2d.position + movement * ( moveSpeed * Time.fixedDeltaTime ) );//we use fixedDeltaTime because we are in FixedUpdate()
    }
}

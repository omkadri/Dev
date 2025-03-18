using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class RPGPlayerController : RPGSingleton<RPGPlayerController>
{
    // For use of AreaExit and AreaEntrance scripts
    public string areaTransitionName;
    public GameObject itemEquipped;
    public bool canAttack = true;//TODO: Create public getter
    public bool canMove = true;//TODO: Create public getter
    public bool itemInUse = false;//TODO: Create public getter

    [SerializeField] Rigidbody2D rb2d;
    [SerializeField] float moveSpeed;
    [SerializeField] float runSpeed = 4f;
    [SerializeField] Animator animator;
    // The hitboxes of our 4 different sword directions
    [SerializeField] GameObject hitBox_Top;
    [SerializeField] GameObject hitBox_Bottom;
    [SerializeField] GameObject hitBox_Left;
    [SerializeField] GameObject hitBox_Right;

    // GameState used to handle when Hero can take certain actions.  Could expand on this depending on if you wanted to add different player game handling states.
    enum GameState { Playing, Paused};
    GameState currentGameState;
    RPGInputActions inputActions;
    Vector2 movement;


    protected override void Awake() 
    {
        // base.Awake() is called to apply our singleton inherited class, as well as anything else we want to set up in Awake()
        base.Awake();
        inputActions = new RPGInputActions();
    }


    void Start()
    {
        inputActions.Movement.Run.performed += _ => StartRun();
        inputActions.Movement.Run.canceled += _ => StopRun();
        inputActions.Combat.Attack.performed += _ => Attack();
        inputActions.RightClick.Use.performed += _ => UseItem();

        currentGameState = GameState.Playing;
    }


    void OnEnable() 
    {
        inputActions.Enable();
    }


    void OnDisable() 
    {
        if (inputActions != null) 
        {
            inputActions.Disable();
        }
    }


    void Update()
    {
        PlayerInput();
    }


    void FixedUpdate() 
    {
        Move();   
    }


    // SpawnItem() is called in our animator
    public void SpawnItem() 
    {
        itemEquipped = RPGInventoryManager.Instance.itemEquippedInv;

        if (itemInUse || !itemEquipped) { return; }

        itemInUse = true;
        RPGItemDisplay itemDisplay = RPGInventoryManager.Instance.currentSelectedItem.GetComponent<RPGItemDisplay>();

        if (itemDisplay) 
        {
            if (itemDisplay.item.itemType == "Bomb") 
            {
                itemInUse = false;
            }

            if (animator.GetFloat("lastMoveX") == 1) 
            {
                Instantiate(itemEquipped, new Vector2(transform.position.x + 1, transform.position.y + 0.5f), transform.rotation);
            }
            else if (animator.GetFloat("lastMoveX") == -1) 
            {
                Instantiate(itemEquipped, new Vector2(transform.position.x - 1, transform.position.y + 0.5f), transform.rotation);
            }
            else if (animator.GetFloat("lastMoveY") == 1) 
            {
                Instantiate(itemEquipped, new Vector2(transform.position.x, transform.position.y + 1.5f), transform.rotation);
            }
            else if (animator.GetFloat("lastMoveY") == -1) 
            {
                Instantiate(itemEquipped, new Vector2(transform.position.x, transform.position.y - 1f), transform.rotation);
            }
        }
    }


    public void ActivateCollider() 
    {
        if (animator.GetFloat("lastMoveX") == -1) 
        {
            hitBox_Left.SetActive(true);
        }
        if (animator.GetFloat("lastMoveX") == 1) 
        {
            hitBox_Right.SetActive(true);
        }
        if (animator.GetFloat("lastMoveY") == -1) 
        {
            hitBox_Bottom.SetActive(true);
        }
        if (animator.GetFloat("lastMoveY") == 1) 
        {
            hitBox_Top.SetActive(true);
        }
    }


    public void toggleGameState() 
    {
        if (currentGameState == GameState.Paused) 
        {
            currentGameState = GameState.Playing;
        } else {
            animator.SetFloat("moveX", 0f);
            animator.SetFloat("moveY", 0f);
            currentGameState = GameState.Paused; 
        }
    }


    public void PauseGame() 
    {
        currentGameState = GameState.Paused;
        Time.timeScale = 0f;
    }


    public void UnpauseGame() 
    {
        currentGameState = GameState.Playing;
        Time.timeScale = 1f;
    }


    public void DialogueStopMove() 
    {
        animator.SetFloat("moveX", 0f);
        animator.SetFloat("moveY", 0f);
    }    


    void PlayerInput() 
    {
        if (!canMove || currentGameState == GameState.Paused) { return; }

        movement = inputActions.Movement.Move.ReadValue<Vector2>();

        animator.SetFloat("moveX", movement.x);
        animator.SetFloat("moveY", movement.y);

        if(movement.x == 1 || movement.x == -1 || movement.y == 1 || movement.y == -1) 
        {
            if (canMove) 
            {
                animator.SetFloat("lastMoveX", movement.x);
                animator.SetFloat("lastMoveY", movement.y);
            }
        }
    }


    void Move() 
    {
        if (!canMove) 
        { 
            return; 
        }

        rb2d.MovePosition(rb2d.position + movement * moveSpeed * Time.fixedDeltaTime);
    }


    void StartRun() 
    {
        animator.SetBool("isRunning", true);
        moveSpeed += runSpeed;
    }


    void StopRun() 
    {
        animator.SetBool("isRunning", false);
        moveSpeed -= runSpeed;
    }


    void Attack() 
    {
        if (canAttack && currentGameState != GameState.Paused) 
        {
            rb2d.linearVelocity = Vector2.zero;
            canMove = false;
            animator.SetTrigger("attack");
        }
    }


    public void canMoveFunction() 
    {
        canMove = true;

        hitBox_Left.SetActive(false);
        hitBox_Right.SetActive(false);
        hitBox_Bottom.SetActive(false);
        hitBox_Top.SetActive(false);
    }


    void UseItem() 
    {
        if (canAttack && currentGameState != GameState.Paused) 
        {
            rb2d.linearVelocity = Vector2.zero;
            canMove = false;
            animator.SetTrigger("useItem");
        }
    }
}
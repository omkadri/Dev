using UnityEngine;

public class TopDown2DGrape : MonoBehaviour, TopDown2DIEnemy
{
    [SerializeField] GameObject grapeProjectilePrefab;

    Animator animator;
    SpriteRenderer spriteRenderer;

    readonly int ATTACK_HASH = Animator.StringToHash( "Attack" );


    void Awake()
    {
        animator = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }


    public void Attack()
    {
        animator.SetTrigger( ATTACK_HASH );

        if ( transform.position.x - TopDown2DPlayerController.Instance.transform.position.x < 0 )
        {
            spriteRenderer.flipX = false;
        }
        else
        {
            spriteRenderer.flipX = true;
        }
    }


    public void SpawnProjectileAnimEvent()
    {
        Instantiate( grapeProjectilePrefab, transform.position, Quaternion.identity );
    }
}
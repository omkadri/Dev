using UnityEngine;

public class GDTVTopDown2DGrape : MonoBehaviour, GDTVTopDown2DIEnemy
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

        if ( transform.position.x - GDTVTopDown2DPlayerController.Instance.transform.position.x < 0 )
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
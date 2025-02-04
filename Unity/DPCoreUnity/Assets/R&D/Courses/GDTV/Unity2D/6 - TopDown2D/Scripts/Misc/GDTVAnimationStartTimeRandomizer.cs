using UnityEngine;

public class GDTVAnimationStartTimeRandomizer : MonoBehaviour
{
    Animator animator;


    void Awake()
    {
        animator = GetComponent<Animator>();
    }


    void Start()
    {
        AnimatorStateInfo state = animator.GetCurrentAnimatorStateInfo( 0 );
        animator.Play( state.fullPathHash, -1, Random.Range( 0f, 1f ) );
    }
}

using UnityEngine;

public class AnimationStartTimeRandomizer : MonoBehaviour
{
    Animator _animator;


    void Awake()
    {
        _animator = GetComponent<Animator>();
    }


    void Start()
    {
        if (!_animator )
        {
            return;
        }
        
        AnimatorStateInfo state = _animator.GetCurrentAnimatorStateInfo( 0 );
        _animator.Play( state.fullPathHash, -1, Random.Range( 0f, 1f ) );
    }
}

using UnityEngine;

public class ShootEmUp2DPlayerAnimations : MonoBehaviour
{
    [SerializeField] ParticleSystem _moveDustVFX;


        void Update()
        {
            DetectMoveDust();
        }


        void DetectMoveDust()
        {
            if( ShootEmUp2DPlayerController.Instance.CheckGrounded() )
            {
                if ( !_moveDustVFX.isPlaying )
                {
                    _moveDustVFX.Play();
                }
            }
            else
            {
                if ( _moveDustVFX.isPlaying )
                {
                    _moveDustVFX.Stop();
                }
            }
        }
}

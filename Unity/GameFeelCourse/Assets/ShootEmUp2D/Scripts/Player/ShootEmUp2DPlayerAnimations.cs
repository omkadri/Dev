using UnityEngine;

public class ShootEmUp2DPlayerAnimations : MonoBehaviour
{
    [SerializeField] ParticleSystem _moveDustVFX;
    [SerializeField] float _tiltAngle = 20f;
    [SerializeField] float _tiltSpeed = 5f;
    [SerializeField] Transform _playerSpriteTransform;


        void Update()
        {
            DetectMoveDust();
            ApplyTilt();
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


        void ApplyTilt()
        {
            float targetAngle;
            if( ShootEmUp2DPlayerController.Instance.MoveInput.x < 0f )
            {
                targetAngle = _tiltAngle;//TODO: Implement logic that makes player tilting consistent when wacing left of right
            }
            else if( ShootEmUp2DPlayerController.Instance.MoveInput.x > 0f )
            {
                targetAngle = -_tiltAngle;
            }
            else
            {
                targetAngle = 0f;
            }

            Quaternion currentPlayerRotation = _playerSpriteTransform.rotation;//TODO: Understand Quaternions and Eulers
            Quaternion targetPlayerRotation = Quaternion.Euler( currentPlayerRotation.eulerAngles.x, currentPlayerRotation.eulerAngles.y, targetAngle );

            _playerSpriteTransform.rotation = Quaternion.Lerp( currentPlayerRotation, targetPlayerRotation, _tiltSpeed * Time.deltaTime );
        }
}

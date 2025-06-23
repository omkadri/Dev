using Unity.Cinemachine;
using UnityEngine;

public class ShootEmUp2DPlayerAnimations : MonoBehaviour
{
    [SerializeField] ParticleSystem _playerMoveDustVFX;
    [SerializeField] float _playerBodyTiltAngle = 14f;
    [SerializeField] float _playerBodyTiltSpeed = 5f;
    [SerializeField] Transform _playerBodySpriteTransform;
    [SerializeField] float _playerHatTiltAngle = 14f;
    [SerializeField] float _playerHatTiltSpeed = 5f;
    [SerializeField] Transform _playerHatSpriteTransform;
    [SerializeField] ParticleSystem bouncePuffVFX;
    [SerializeField] float _hardLandingVelocityThreshold = -20f;

    Vector2 _velocityBeforePhysicsUpdate;//TODO: better name
    Rigidbody2D _rb2d;
    CinemachineImpulseSource _groundImpulseSource;


    void Awake()
    {
        _rb2d = GetComponent<Rigidbody2D>();
        _groundImpulseSource = GetComponents<CinemachineImpulseSource>()[1];//TODO: Find a better way to get the groundImpulseSource. Indexing can be messy.
    }


    void Update()
    {
        DetectPlayerMoveDust();
        ApplyPlayerBodyTilt();
        ApplyPlayerHatTilt();
    }


    void OnEnable()
    {
        ShootEmUp2DPlayerController.OnJump += PlayBouncePuffParticle;
    }


    void OnDisable()
    {
        ShootEmUp2DPlayerController.OnJump -= PlayBouncePuffParticle;
    }


    void FixedUpdate()
    {
        _velocityBeforePhysicsUpdate = _rb2d.linearVelocity;
    }


    void OnCollisionEnter2D(Collision2D other)
    {
        if(_velocityBeforePhysicsUpdate.y < _hardLandingVelocityThreshold)
        {
            PlayBouncePuffParticle();
            _groundImpulseSource.GenerateImpulse();
        }
    }


    void DetectPlayerMoveDust()
    {
        if(ShootEmUp2DPlayerController.Instance.CheckGrounded())
        {
            if (!_playerMoveDustVFX.isPlaying)
            {
                _playerMoveDustVFX.Play();
            }
        }
        else
        {
            if (_playerMoveDustVFX.isPlaying)
            {
                _playerMoveDustVFX.Stop();
            }
        }
    }


    void ApplyPlayerBodyTilt()
    {
        float targetAngle;
        if(ShootEmUp2DPlayerController.Instance.MoveInput.x < 0f)
        {
            targetAngle = _playerBodyTiltAngle;//TODO: Implement logic that makes player tilting consistent when wacing left of right
        }
        else if(ShootEmUp2DPlayerController.Instance.MoveInput.x > 0f)
        {
            targetAngle = -_playerBodyTiltAngle;
        }
        else
        {
            targetAngle = 0f;
        }

        Quaternion currentPlayerRotation = _playerBodySpriteTransform.rotation;//TODO: Understand Quaternions and Eulers
        Quaternion targetPlayerRotation = Quaternion.Euler(currentPlayerRotation.eulerAngles.x, currentPlayerRotation.eulerAngles.y, targetAngle);

        _playerBodySpriteTransform.rotation = Quaternion.Lerp(currentPlayerRotation, targetPlayerRotation, _playerBodyTiltSpeed * Time.deltaTime);
    }


    void ApplyPlayerHatTilt()
    {
        {
            float targetAngle;
            if(ShootEmUp2DPlayerController.Instance.MoveInput.x > 0f)
            {
                targetAngle = _playerHatTiltAngle;//TODO: Implement logic that makes player tilting consistent when wacing left of right
            }
            else if(ShootEmUp2DPlayerController.Instance.MoveInput.x < 0f)
            {
                targetAngle = -_playerHatTiltAngle;
            }
            else
            {
                targetAngle = 0f;
            }

            Quaternion currentHatRotation = _playerHatSpriteTransform.rotation;//TODO: Understand Quaternions and Eulers
            Quaternion targetHatRotation = Quaternion.Euler(currentHatRotation.eulerAngles.x, currentHatRotation.eulerAngles.y, targetAngle);

            _playerHatSpriteTransform.rotation = Quaternion.Lerp(currentHatRotation, targetHatRotation, _playerHatTiltSpeed * Time.deltaTime);
        }
    }


    void PlayBouncePuffParticle()
    {
        bouncePuffVFX.Play();
    }
}

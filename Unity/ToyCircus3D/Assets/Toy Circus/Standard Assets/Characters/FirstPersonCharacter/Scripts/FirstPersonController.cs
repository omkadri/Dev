using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
using UnityStandardAssets.Utility;
using Random = UnityEngine.Random;

namespace UnityStandardAssets.Characters.FirstPerson
{
    [RequireComponent(typeof(CharacterController))]
    [RequireComponent(typeof(AudioSource))]
    public class FirstPersonController : MonoBehaviour
    {
        [SerializeField] bool _isWalking;
        [SerializeField] float _walkSpeed;
        [SerializeField] float _runSpeed;
        [SerializeField] [Range(0f, 1f)] float _runstepLenghten;
        [SerializeField] float _jumpSpeed;
        [SerializeField] float _stickToGroundForce;
        [SerializeField] float _gravityMultiplier;
        [SerializeField] MouseLook _mouseLook;
        [SerializeField] bool _useFovKick;
        [SerializeField] FOVKick _fovKick = new FOVKick();
        [SerializeField] bool _useHeadBob;
        [SerializeField] CurveControlledBob _headBob = new CurveControlledBob();
        [SerializeField] LerpControlledBob _jumpBob = new LerpControlledBob();
        [SerializeField] float _stepInterval;
        [SerializeField] AudioClip[] _footstepSounds; // an array of footstep sounds that will be randomly selected from
        [SerializeField] AudioClip _jumpSound;        // the sound played when character leaves the ground
        [SerializeField] AudioClip _landSound;        // the sound played when character touches back on ground

        Camera _camera;
        bool _jump;
        float _yRotation;
        Vector2 _input;
        Vector3 _moveDir = Vector3.zero;
        CharacterController _characterController;
        CollisionFlags _collisionFlags;
        bool _previouslyGrounded;
        Vector3 _originalCameraPosition;
        float _stepCycle;
        float _nextStep;
        bool _jumping;
        AudioSource _audioSource;

        void Start()
        {
            _characterController = GetComponent<CharacterController>();
            _camera = Camera.main;
            _originalCameraPosition = _camera.transform.localPosition;
            _fovKick.Setup(_camera);
            _headBob.Setup(_camera, _stepInterval);
            _stepCycle = 0f;
            _nextStep = _stepCycle / 2f;
            _jumping = false;
            _audioSource = GetComponent<AudioSource>();
            _mouseLook.Init(transform, _camera.transform);
        }

        void Update()
        {
            RotateView();
            if (!_jump)
            {
                _jump = CrossPlatformInputManager.GetButtonDown("Jump");
            }

            if (!_previouslyGrounded && _characterController.isGrounded)
            {
                StartCoroutine(_jumpBob.DoBobCycle());
                PlayLandingSound();
                _moveDir.y = 0f;
                _jumping = false;
            }

            if (!_characterController.isGrounded && !_jumping && _previouslyGrounded)
            {
                _moveDir.y = 0f;
            }

            _previouslyGrounded = _characterController.isGrounded;
        }

        void PlayLandingSound()
        {
            _audioSource.clip = _landSound;
            _audioSource.Play();
            _nextStep = _stepCycle + .5f;
        }

        void FixedUpdate()
        {
            float speed;
            GetInput(out speed);

            Vector3 desiredMove = transform.forward * _input.y + transform.right * _input.x;

            RaycastHit hitInfo;
            Physics.SphereCast(transform.position, _characterController.radius, Vector3.down, out hitInfo,
                               _characterController.height / 2f, Physics.AllLayers, QueryTriggerInteraction.Ignore);
            desiredMove = Vector3.ProjectOnPlane(desiredMove, hitInfo.normal).normalized;

            _moveDir.x = desiredMove.x * speed;
            _moveDir.z = desiredMove.z * speed;

            if (_characterController.isGrounded)
            {
                _moveDir.y = -_stickToGroundForce;

                if (_jump)
                {
                    _moveDir.y = _jumpSpeed;
                    PlayJumpSound();
                    _jump = false;
                    _jumping = true;
                }
            }
            else
            {
                _moveDir += Physics.gravity * _gravityMultiplier * Time.fixedDeltaTime;
            }

            _collisionFlags = _characterController.Move(_moveDir * Time.fixedDeltaTime);

            ProgressStepCycle(speed);
            UpdateCameraPosition(speed);

            _mouseLook.UpdateCursorLock();
        }

        void PlayJumpSound()
        {
            _audioSource.clip = _jumpSound;
            _audioSource.Play();
        }

        void ProgressStepCycle(float speed)
        {
            if (_characterController.velocity.sqrMagnitude > 0 && (_input.x != 0 || _input.y != 0))
            {
                _stepCycle += (_characterController.velocity.magnitude + (speed * (_isWalking ? 1f : _runstepLenghten))) *
                              Time.fixedDeltaTime;
            }

            if (!(_stepCycle > _nextStep)) return;

            _nextStep = _stepCycle + _stepInterval;

            PlayFootStepAudio();
        }

        void PlayFootStepAudio()
        {
            if (!_characterController.isGrounded) return;

            int n = Random.Range(1, _footstepSounds.Length);
            _audioSource.clip = _footstepSounds[n];
            _audioSource.PlayOneShot(_audioSource.clip);

            _footstepSounds[n] = _footstepSounds[0];
            _footstepSounds[0] = _audioSource.clip;
        }

        void UpdateCameraPosition(float speed)
        {
            Vector3 newCameraPosition;
            if (!_useHeadBob) return;

            if (_characterController.velocity.magnitude > 0 && _characterController.isGrounded)
            {
                _camera.transform.localPosition =
                    _headBob.DoHeadBob(_characterController.velocity.magnitude + (speed * (_isWalking ? 1f : _runstepLenghten)));
                newCameraPosition = _camera.transform.localPosition;
                newCameraPosition.y = _camera.transform.localPosition.y - _jumpBob.Offset();
            }
            else
            {
                newCameraPosition = _camera.transform.localPosition;
                newCameraPosition.y = _originalCameraPosition.y - _jumpBob.Offset();
            }
            _camera.transform.localPosition = newCameraPosition;
        }

        void GetInput(out float speed)
        {
            float horizontal = CrossPlatformInputManager.GetAxis("Horizontal");
            float vertical = CrossPlatformInputManager.GetAxis("Vertical");

            bool wasWalking = _isWalking;

#if !MOBILE_INPUT
            _isWalking = !Input.GetKey(KeyCode.LeftShift);
#endif
            speed = _isWalking ? _walkSpeed : _runSpeed;
            _input = new Vector2(horizontal, vertical);

            if (_input.sqrMagnitude > 1)
            {
                _input.Normalize();
            }

            if (_isWalking != wasWalking && _useFovKick && _characterController.velocity.sqrMagnitude > 0)
            {
                StopAllCoroutines();
                StartCoroutine(!_isWalking ? _fovKick.FOVKickUp() : _fovKick.FOVKickDown());
            }
        }

        void RotateView()
        {
            _mouseLook.LookRotation(transform, _camera.transform);
        }

        void OnControllerColliderHit(ControllerColliderHit hit)
        {
            Rigidbody body = hit.collider.attachedRigidbody;

            if (_collisionFlags == CollisionFlags.Below) return;
            if (body == null || body.isKinematic) return;

            body.AddForceAtPosition(_characterController.velocity * 0.1f, hit.point, ForceMode.Impulse);
        }
    }
}
using UnityEngine;

public class ForceReceiver : MonoBehaviour
{
    [SerializeField] CharacterController _charcaterController;
    [SerializeField] float _drag = 0.3f;

    Vector3 _dampingVelocity;
    Vector3 _impact;

    float _vertivalVelocity;

    public Vector3 Movement => _impact + Vector3.up * _vertivalVelocity;//this allows us to maintain gravity across different player states

    void Update() //TODO: Should this be FixedUpdate since it involves physics?
    {
        if (_vertivalVelocity < 0f && _charcaterController.isGrounded)
        {
            _vertivalVelocity = Physics.gravity.y * Time.deltaTime;// this prevents the player from constantly falling event if they are slightly off the ground
        }
        else
        {
            _vertivalVelocity += Physics.gravity.y * Time.deltaTime;
        }

        _impact = Vector3.SmoothDamp(_impact, Vector3.zero, ref _dampingVelocity, _drag);//TODO: Understand this function
    }


    public void AddForce(Vector3 force)
    {
        _impact += force;
    }
}
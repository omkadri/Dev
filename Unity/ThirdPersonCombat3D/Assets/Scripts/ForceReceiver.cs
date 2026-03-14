using UnityEngine;

public class ForceReceiver : MonoBehaviour
{
    [SerializeField] CharacterController _charcaterController;

    float _vertivalVelocity;

    public Vector3 Movement => Vector3.up * _vertivalVelocity;//this allows us to maintain gravity across different player states

    void Update()
    {
        if (_vertivalVelocity < 0f && _charcaterController.isGrounded)
        {
            _vertivalVelocity = Physics.gravity.y * Time.deltaTime;// this prevents the player from constantly falling event if they are slightly off the ground
        }
        else
        {
            _vertivalVelocity += Physics.gravity.y * Time.deltaTime;
        }
    }
}
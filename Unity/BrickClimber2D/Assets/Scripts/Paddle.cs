using UnityEngine;

public class PlayerMover : MonoBehaviour
{
    [SerializeField] float _moveSpeed = 5f;
    [SerializeField] float _minX = -2.3f; //TODO: a more systematic way of detemining the boudaries
    [SerializeField] float _maxX = 2.3f;

    void Update()
    {
        float horizontalInput = Input.GetAxisRaw("Horizontal"); //TODO: Switch to inputactions

        Vector2 movement = new Vector3(horizontalInput, 0f);
        transform.Translate(movement * _moveSpeed * Time.deltaTime);

        Vector2 clampedPosition = transform.position;
        clampedPosition.x = Mathf.Clamp(clampedPosition.x, _minX, _maxX);
        transform.position = clampedPosition;
    }
}
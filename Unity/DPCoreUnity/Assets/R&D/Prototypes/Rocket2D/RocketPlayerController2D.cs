using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RocketPlayerController2D : MonoBehaviour
{
    [SerializeField] float steerSpeed = 1f;
    [SerializeField] float moveSpeed = 0.01f;

    private bool isMoving = false; // Track if the rocket is moving

    void Update()
    {
        // Check for input to start moving
        if (Input.GetKeyDown(KeyCode.Space)) // Change this to any key you want
        {
            isMoving = true; // Set moving to true when the key is pressed
        }

        // Steer the rocket regardless of whether it's moving or not
        float steerAmount = Input.GetAxis("Horizontal");
        transform.Rotate(0, 0, (-steerAmount * steerSpeed) * Time.deltaTime);

        // Move the rocket if isMoving is true
        if (isMoving)
        {
            transform.Translate(0, moveSpeed * Time.deltaTime, 0);
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DAttacker : MonoBehaviour
{
    [Range (0f, 5f)][SerializeField] float currentSpeed = 0f;

    void Update()
    {
        transform.Translate(Vector2.left* currentSpeed * Time.deltaTime);
    }

    public void SetMovementSpeed(float speed) //this is referred to as passing in
                //This function is being called by the animation event in the unity editor. SPELLING MATTERS!!!!!
    {
        currentSpeed = speed;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DAttacker : MonoBehaviour
{
    [Range ( 0f, 5f )][SerializeField] float _currentSpeed = 0f;


    void Update()
    {
        transform.Translate( Vector2.left* _currentSpeed * Time.deltaTime );
    }


    public void SetMovementSpeed( float speed ) //this is referred to as passing in
    //This function is being called by the animation event in the unity editor. SPELLING MATTERS!!!!!
    {
        _currentSpeed = speed;
    }
}

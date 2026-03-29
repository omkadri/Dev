using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paddle : MonoBehaviour
{
    //configuration parameters

    [SerializeField] float ScreenWidthInUnits;
    [SerializeField] float mouseXPosMin;
    [SerializeField] float mouseXPosMax;


    void Update()
    {
        float mouseXPosInUnits = Input.mousePosition.x / Screen.width * ScreenWidthInUnits; // 1 //
        Vector2 paddlePos = new Vector2(transform.position.x, transform.position.y); // 2 //
        paddlePos.x = Mathf.Clamp(mouseXPosInUnits, mouseXPosMin, mouseXPosMax); // 3 //
        transform.position = paddlePos; // 4 //
    }
}










// 1 // this is a variable creative to get the mouse's X position relative to the screen size.

/* 2  vectors are a compact way to store object coordinates so that they can easily be passed to other objects or components 
     (in this case, the transform.position component of the paddle object) 
     (We are using Vector2 because this is a 2D game)*/

// 3 this adds a restriction on what the x position can be so that the paddle cannot leave the game screen

//4 After considering all prior restrictions, this line tells the paddle to make its x position according to the mouse's x position 
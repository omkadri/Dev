#include "raylib.h"
int main()
{ 
        //window properties
        const int _windowWidth = 800;
        const int _windowHeight = 450;
        int _targetFramerate = 60;

        //player properties
        const int _playerWidth = 50;
        const int _playerHeight = 50;
        int _playerPosY = _windowHeight - _playerHeight;
        int _playerVelocityY = 0;
        int _playerJumpVelocity = 10;

        //acceleration due to gravity (pixels per frame per frame)
        const int _gravity = 1;

        //initialize window
        InitWindow(_windowWidth, _windowHeight, "Dapper Dasher");
        SetTargetFPS(_targetFramerate);
        
        while(!WindowShouldClose())
        {
                //start drawing
                BeginDrawing();
                ClearBackground(WHITE);

                //perform ground check
                if (_playerPosY >= _windowHeight - _playerHeight)
                {
                        _playerVelocityY = 0;
                }
                else
                {
                        //apply gravity
                        _playerVelocityY += _gravity;
                }

                //player logic
                DrawRectangle( _windowWidth/2, _playerPosY, _playerWidth, _playerHeight, BLUE );
                
                //jump logic
                if (IsKeyPressed(KEY_SPACE))
                {
                        _playerVelocityY -= _playerJumpVelocity;
                }
                
                _playerPosY += _playerVelocityY;

                //stop drawing
                EndDrawing();
        }
        CloseWindow();
}
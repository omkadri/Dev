#include "raylib.h"
int main()
{ 
        //window properties
        const int _windowWidth = 800;
        const int _windowHeight = 450;
        int _targetFramerate = 60;

        //initialize window
        InitWindow(_windowWidth, _windowHeight, "Dapper Dasher"); //TODO: make string variable
        SetTargetFPS(_targetFramerate);

        //player properties
        int _playerVelocityY = 0;
        int _playerJumpVelocity = 10;
        bool _isGrounded = true;

        //acceleration due to gravity (pixels per frame per frame)
        const int _gravity = 1;

        //player sprite sheet setup
        Texture2D _playerSpriteSheet = LoadTexture("textures/scarfy.png"); //TODO: make string variable
        int _playerSpriteSheetRowCount = 6;
        int _playerSpriteSheetColumnCount = 1;
        Rectangle _playerRec;
        _playerRec.x = 0;
        _playerRec.y = 0;
        _playerRec.width = _playerSpriteSheet.width / _playerSpriteSheetRowCount;
        _playerRec.height = _playerSpriteSheet.height / _playerSpriteSheetColumnCount;

        //player texture position
        Vector2 _playerPos;
        _playerPos.x = _windowWidth/2 - _playerRec.width/2;
        _playerPos.y = _windowHeight - _playerRec.height;

        
        while(!WindowShouldClose())
        {
                //start drawing
                BeginDrawing();
                ClearBackground(WHITE);

                //perform ground check
                if (_playerPos.y >= _windowHeight - _playerRec.height)
                {
                        _playerVelocityY = 0;
                        _isGrounded = true;
                }
                else
                {
                        //apply gravity
                        _playerVelocityY += _gravity;
                        _isGrounded = false;
                }

                //jump logic
                if (IsKeyPressed(KEY_SPACE) && _isGrounded)
                {
                        _playerVelocityY -= _playerJumpVelocity;
                }

                //player logic
                DrawTextureRec( _playerSpriteSheet, _playerRec, _playerPos, WHITE);
                _playerPos.y += _playerVelocityY;

                //stop drawing
                EndDrawing();
        }
        UnloadTexture(_playerSpriteSheet);
        CloseWindow();
}
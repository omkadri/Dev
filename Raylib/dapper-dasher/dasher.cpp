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
        
        //acceleration due to gravity ( (pixels per second) per second )
        const int _gravity = 1000;
        
        //player properties
        int _playerJumpVelocity = 600;
        int _playerVelocityY = 0;
        bool _isGrounded = true;

        //player sprite sheet setup
        Texture2D _playerSpriteSheet = LoadTexture("textures/scarfy.png"); //TODO: make string variable
        int _playerSpriteSheetRowCount = 6;
        int _playerSpriteSheetColumnCount = 1;
        Rectangle _playerRec;
        _playerRec.x = 0;
        _playerRec.y = 0;
        _playerRec.width = _playerSpriteSheet.width / _playerSpriteSheetRowCount;
        _playerRec.height = _playerSpriteSheet.height / _playerSpriteSheetColumnCount;
        
        //player position
        Vector2 _playerPos;
        _playerPos.x = _windowWidth/2 - _playerRec.width/2;
        _playerPos.y = _windowHeight - _playerRec.height;

        //player animation variables
        int _currentPlayerFrame = 0;
        const float _updateTimePlayer = 1.0 / 12.0;
        float _runningTimePlayer = 0;

        //hazard properties
        Texture2D _hazardSpriteSheet = LoadTexture("textures/12_nebula_spritesheet.png"); //TODO: make string variable
        int _hazardSpriteSheetRowCount = 8;
        int _hazardSpriteSheetColumnCount = 8;
        Rectangle _hazardRec{0.0, 0.0, _hazardSpriteSheet.width/_hazardSpriteSheetRowCount, _hazardSpriteSheet.height/_hazardSpriteSheetColumnCount};
        Vector2 _hazardPos{_windowWidth, _windowHeight - _hazardRec.height};
        int _hazardVelocityX = -200;

        //hazard annimation variables
        int _currentHazardFrame = 0;
        const float _updateTimeHazard = 1.0 / 12.0;
        float _runningTimeHazard = 0;

        while(!WindowShouldClose())
        {
                //delta time (time since last frame)
                const float dT = GetFrameTime();

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
                        _playerVelocityY += _gravity * dT;
                        _isGrounded = false;
                }

                //jump logic
                if (IsKeyPressed(KEY_SPACE) && _isGrounded)
                {
                        _playerVelocityY -= _playerJumpVelocity;
                }

                //update player position
                _playerPos.y += _playerVelocityY * dT;

                //update hazard position
                _hazardPos.x += _hazardVelocityX * dT;

                //update player animation frame
                if (_isGrounded)
                {
                        //update player running time
                        _runningTimePlayer += dT;
                        if (_runningTimePlayer >= _updateTimePlayer)
                        {
                                _runningTimePlayer = 0.0;
                                //update player animation frame
                                _playerRec.x = _currentPlayerFrame * _playerRec.width;
                                _currentPlayerFrame++;
                                if (_currentPlayerFrame > 5)
                                {
                                        _currentPlayerFrame = 0;
                                }
                        }
                }

                //update hazard animation frame
                _runningTimeHazard += dT;
                if (_runningTimeHazard >= _updateTimePlayer)
                {
                        _runningTimeHazard = 0.0;
                        //update hazard animation frame
                        _hazardRec.x = _currentHazardFrame * _hazardRec.width;
                        _currentHazardFrame++;
                        if (_currentHazardFrame > 7)
                        {
                                _currentHazardFrame = 0;
                        }
                }

                //draw player
                DrawTextureRec( _playerSpriteSheet, _playerRec, _playerPos, WHITE);

                //draw hazard
                DrawTextureRec( _hazardSpriteSheet, _hazardRec, _hazardPos, WHITE);

                //stop drawing
                EndDrawing();
        }
        UnloadTexture(_playerSpriteSheet);
        UnloadTexture(_hazardSpriteSheet);
        CloseWindow();
}
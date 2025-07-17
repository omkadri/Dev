#include "raylib.h"

struct AnimData
{
        Rectangle rec;
        Vector2 pos;
        int currentFrame;
        float updateTime;
        float runningTime;
};

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
        Texture2D _playerSpriteSheet = LoadTexture("textures/scarfy.png"); //TODO: make string variable
        int _playerSpriteSheetRowCount = 6;
        int _playerSpriteSheetColumnCount = 1;
        int _playerJumpVelocity = 600;
        int _playerVelocityY = 0;
        bool _isGrounded = true;

        //player anim data
        AnimData _playerData;
        _playerData.rec.width = _playerSpriteSheet.width / _playerSpriteSheetRowCount;
        _playerData.rec.height = _playerSpriteSheet.height / _playerSpriteSheetColumnCount;
        _playerData.rec.x = 0;
        _playerData.rec.y = 0;
        _playerData.pos.x = _windowWidth / 2 - _playerData.rec.width / 2;
        _playerData.pos.y = _windowHeight - _playerData.rec.height;
        _playerData.currentFrame = 0;
        _playerData.updateTime = 1.0 / 12.0;
        _playerData.runningTime = 0.0;

        //hazard properties
        Texture2D _hazardSpriteSheet = LoadTexture("textures/12_nebula_spritesheet.png"); //TODO: make string variable
        int _hazardSpriteSheetRowCount = 8;
        int _hazardSpriteSheetColumnCount = 8;
        int _hazardVelocityX = -200;

        //hazard anim data setup
        AnimData _hazardAData{
                {0.0, 0.0, _hazardSpriteSheet.width / _hazardSpriteSheetRowCount, _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount},//Rectangle rec
                {_windowWidth, _windowHeight - _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount},// Vector2 pos
                0,// int currentFrame
                1.0/16.0,// float updateTime
                0 // float runningTime
        };

        AnimData _hazardBData{
                {0.0, 0.0, _hazardSpriteSheet.width / _hazardSpriteSheetRowCount, _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount},//Rectangle rec
                {_windowWidth + 300, _windowHeight - _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount},// Vector2 pos
                0,// int currentFrame
                1.0/12.0,// float updateTime
                0 // float runningTime
        };

        while(!WindowShouldClose())
        {
                //delta time (time since last frame)
                const float dT = GetFrameTime();

                //start drawing
                BeginDrawing();
                ClearBackground(WHITE);

                //perform ground check
                if (_playerData.pos.y >= _windowHeight - _playerData.rec.height)
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
                _playerData.pos.y += _playerVelocityY * dT;

                //update hazard position
                _hazardAData.pos.x += _hazardVelocityX * dT;
                _hazardBData.pos.x += _hazardVelocityX * dT;

                //update player animation frame
                if (_isGrounded)
                {
                        //update player running time
                        _playerData.runningTime += dT;
                        if (_playerData.runningTime >= _playerData.updateTime)
                        {
                                _playerData.runningTime = 0.0;
                                //update player animation frame
                                _playerData.rec.x = _playerData.currentFrame * _playerData.rec.width;
                                _playerData.currentFrame++;
                                if (_playerData.currentFrame > 5)
                                {
                                        _playerData.currentFrame = 0;
                                }
                        }
                }

                //update hazard A animation frame
                _hazardAData.runningTime += dT;
                if (_hazardAData.runningTime >= _hazardAData.updateTime)
                {
                        _hazardAData.runningTime = 0.0;
                        //update hazard animation frame
                        _hazardAData.rec.x = _hazardAData.currentFrame * _hazardAData.rec.width;
                        _hazardAData.currentFrame++;
                        if (_hazardAData.currentFrame > 7)
                        {
                                _hazardAData.currentFrame = 0;
                        }
                }

                //update hazard B animation frame
                _hazardBData.runningTime += dT;
                if (_hazardBData.runningTime >= _hazardBData.updateTime)
                {
                        _hazardBData.runningTime = 0.0;
                        //update hazard animation frame
                        _hazardBData.rec.x = _hazardBData.currentFrame * _hazardBData.rec.width;
                        _hazardBData.currentFrame++;
                        if (_hazardBData.currentFrame > 7)
                        {
                                _hazardBData.currentFrame = 0;
                        }
                }

                //draw player
                DrawTextureRec( _playerSpriteSheet, _playerData.rec, _playerData.pos, WHITE);

                //draw hazard
                DrawTextureRec( _hazardSpriteSheet, _hazardAData.rec, _hazardAData.pos, WHITE);

                //draw hazard 2
                DrawTextureRec( _hazardSpriteSheet, _hazardBData.rec, _hazardBData.pos, RED);

                //stop drawing
                EndDrawing();
        }
        UnloadTexture(_playerSpriteSheet);
        UnloadTexture(_hazardSpriteSheet);
        CloseWindow();
}
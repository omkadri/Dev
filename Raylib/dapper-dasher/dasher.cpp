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
        int _windowDimensions[2];
        _windowDimensions[0] = 800; //width
        _windowDimensions[1] = 450; //height

        int _targetFramerate = 60;

        //initialize window
        InitWindow(_windowDimensions[0], _windowDimensions[1], "Dapper Dasher"); //TODO: make string variable
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
        AnimData _player;
        _player.rec.width = _playerSpriteSheet.width / _playerSpriteSheetRowCount;
        _player.rec.height = _playerSpriteSheet.height / _playerSpriteSheetColumnCount;
        _player.rec.x = 0;
        _player.rec.y = 0;
        _player.pos.x = _windowDimensions[0] / 2 - _player.rec.width / 2;
        _player.pos.y = _windowDimensions[1] - _player.rec.height;
        _player.currentFrame = 0;
        _player.updateTime = 1.0 / 12.0;
        _player.runningTime = 0.0;

        //hazard properties
        Texture2D _hazardSpriteSheet = LoadTexture("textures/12_nebula_spritesheet.png"); //TODO: make string variable
        int _hazardSpriteSheetRowCount = 8;
        int _hazardSpriteSheetColumnCount = 8;
        int _hazardVelocityX = -200;

        //hazard anim data setup
        AnimData _hazardA{
                {0.0, 0.0, _hazardSpriteSheet.width / _hazardSpriteSheetRowCount, _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount},//Rectangle rec
                {_windowDimensions[0], _windowDimensions[1] - _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount},// Vector2 pos
                0,// int currentFrame
                1.0/16.0,// float updateTime
                0 // float runningTime
        };

        AnimData _hazardB{
                {0.0, 0.0, _hazardSpriteSheet.width / _hazardSpriteSheetRowCount, _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount},//Rectangle rec
                {_windowDimensions[0] + 300, _windowDimensions[1] - _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount},// Vector2 pos
                0,// int currentFrame
                1.0/12.0,// float updateTime
                0 // float runningTime
        };


        AnimData _hazards[2]{ _hazardA, _hazardB };


        while(!WindowShouldClose())
        {
                //delta time (time since last frame)
                const float dT = GetFrameTime();

                //start drawing
                BeginDrawing();
                ClearBackground(WHITE);

                //perform ground check
                if (_player.pos.y >= _windowDimensions[1] - _player.rec.height)
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
                _player.pos.y += _playerVelocityY * dT;

                //update hazard position
                _hazards[0].pos.x += _hazardVelocityX * dT;
                _hazards[1].pos.x += _hazardVelocityX * dT;

                //update player animation frame
                if (_isGrounded)
                {
                        //update player running time
                        _player.runningTime += dT;
                        if (_player.runningTime >= _player.updateTime)
                        {
                                _player.runningTime = 0.0;
                                //update player animation frame
                                _player.rec.x = _player.currentFrame * _player.rec.width;
                                _player.currentFrame++;
                                if (_player.currentFrame > 5)
                                {
                                        _player.currentFrame = 0;
                                }
                        }
                }

                //update hazard A animation frame
                _hazards[0].runningTime += dT;
                if (_hazards[0].runningTime >= _hazards[0].updateTime)
                {
                        _hazards[0].runningTime = 0.0;
                        //update hazard animation frame
                        _hazards[0].rec.x = _hazards[0].currentFrame * _hazards[0].rec.width;
                        _hazards[0].currentFrame++;
                        if (_hazards[0].currentFrame > 7)
                        {
                                _hazards[0].currentFrame = 0;
                        }
                }

                //update hazard B animation frame
                _hazards[1].runningTime += dT;
                if (_hazards[1].runningTime >= _hazards[1].updateTime)
                {
                        _hazards[1].runningTime = 0.0;
                        //update hazard animation frame
                        _hazards[1].rec.x = _hazards[1].currentFrame * _hazards[1].rec.width;
                        _hazards[1].currentFrame++;
                        if (_hazards[1].currentFrame > 7)
                        {
                                _hazards[1].currentFrame = 0;
                        }
                }

                //draw player
                DrawTextureRec( _playerSpriteSheet, _player.rec, _player.pos, WHITE);

                //draw hazard
                DrawTextureRec( _hazardSpriteSheet, _hazards[0].rec, _hazards[0].pos, WHITE);

                //draw hazard 2
                DrawTextureRec( _hazardSpriteSheet, _hazards[1].rec, _hazards[1].pos, RED);

                //stop drawing
                EndDrawing();
        }
        UnloadTexture(_playerSpriteSheet);
        UnloadTexture(_hazardSpriteSheet);
        CloseWindow();
}
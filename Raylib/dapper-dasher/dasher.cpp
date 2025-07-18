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
        const int _hazardCount = 6;
        AnimData _hazards[_hazardCount]{};

        for (int i = 0; i < _hazardCount; i++)
        {
                _hazards[i].rec.x = 0.0;
                _hazards[i].rec.y = 0.0;
                _hazards[i].rec.width = _hazardSpriteSheet.width / _hazardSpriteSheetRowCount;
                _hazards[i].rec.height = _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount;
                _hazards[i].pos.x = _windowDimensions[0] + i * 300;
                _hazards[i].pos.y = _windowDimensions[1] - _hazardSpriteSheet.height / _hazardSpriteSheetColumnCount;
                _hazards[i].currentFrame = 0;
                _hazards[i].runningTime = 0.0;
                _hazards[i].updateTime = 1.0 / 16.0;
        }

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

                //update hazard x position
                for (int i = 0; i < _hazardCount; i++)
                {
                        _hazards[i].pos.x += _hazardVelocityX * dT;
                }

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

                for (int i = 0; i < _hazardCount; i++)
                {
                        //update hazard animation frame
                        _hazards[i].runningTime += dT;
                        if (_hazards[i].runningTime >= _hazards[i].updateTime)
                        {
                                _hazards[i].runningTime = 0.0;
                                //update hazard animation frame
                                _hazards[i].rec.x = _hazards[i].currentFrame * _hazards[i].rec.width;
                                _hazards[i].currentFrame++;
                                if (_hazards[i].currentFrame > 7)
                                {
                                        _hazards[i].currentFrame = 0;
                                }
                        }
                }

                //draw player
                DrawTextureRec( _playerSpriteSheet, _player.rec, _player.pos, WHITE);

                //draw hazard
                for (int i = 0; i < _hazardCount; i++)
                {
                        DrawTextureRec( _hazardSpriteSheet, _hazards[i].rec, _hazards[i].pos, WHITE);
                }
                //stop drawing
                EndDrawing();
        }
        UnloadTexture(_playerSpriteSheet);
        UnloadTexture(_hazardSpriteSheet);
        CloseWindow();
}
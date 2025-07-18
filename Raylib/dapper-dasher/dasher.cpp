#include "raylib.h"

struct AnimData
{
        Rectangle rec;
        Vector2 pos;
        int currentFrame;
        float updateTime;
        float runningTime;
};

bool isGrounded( AnimData data, int windowHeight )
{
        return data.pos.y >= windowHeight - data.rec.height;
}

AnimData updateAnimData(AnimData data, float deltaTime, int maxFrame)
{
        //update running time
        data.runningTime += deltaTime;
        if (data.runningTime >= data.updateTime)
        {
                data.runningTime = 0.0f;
                //update animation frame
                data.rec.x = data.currentFrame * data.rec.width;
                data.currentFrame++;
                if (data.currentFrame >= maxFrame)
                {
                        data.currentFrame = 0;
                }
        }
        return data;
}

int main()
{ 
        //window properties
        int _windowDimensions[2];
        _windowDimensions[0] = 500; //width
        _windowDimensions[1] = 350; //height
        int _targetFramerate = 60;

        //initialize window
        InitWindow(_windowDimensions[0], _windowDimensions[1], "Dapper Dasher"); //TODO: make string variable
        SetTargetFPS(_targetFramerate);
        
        //acceleration due to gravity ( (pixels per second) per second )
        const int _gravity = 1000;

        //background
        Texture2D _backgroundImage = LoadTexture("textures/far-buildings.png"); //TODO: make string variable
        float _backgroundX{};
        int _backgroundScrollingSpeed = 20;

        Texture2D _midgroundImage = LoadTexture("textures/back-buildings.png"); //TODO: make string variable
        float _midgroundX{};
        int _midgroundScrollingSpeed = 40;

        Texture2D _foregroundImage = LoadTexture("textures/foreground.png"); //TODO: make string variable
        float _foregroundX{};
        int _foregroundScrollingSpeed = 80;
        
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

        float _finishLine{ _hazards[_hazardCount - 1].pos.x };

        while(!WindowShouldClose())
        {
                //delta time (time since last frame)
                const float dT = GetFrameTime();

                //start drawing
                BeginDrawing();
                ClearBackground(WHITE);

                _backgroundX -= _backgroundScrollingSpeed * dT;
                _midgroundX -= _midgroundScrollingSpeed * dT;
                _foregroundX -= _foregroundScrollingSpeed * dT;

                if (_backgroundX <= -_backgroundImage.width * 2)
                {
                        _backgroundX = 0.0;
                }
                if (_midgroundX <= -_midgroundImage.width * 2)
                {
                        _midgroundX = 0.0;
                }
                if (_foregroundX <= -_foregroundImage.width * 2)
                {
                        _foregroundX = 0.0;
                }

                //draw background
                Vector2 _backgroundAPos = {_backgroundX, 0.0};
                DrawTextureEx(_backgroundImage, _backgroundAPos, 0.0, 2.0, WHITE);
                Vector2 _backgroundBPos = {_backgroundX + _backgroundImage.width*2, 0.0};
                DrawTextureEx(_backgroundImage, _backgroundBPos, 0.0, 2.0, WHITE);

                //draw midground
                Vector2 _midgroundPos = {_midgroundX, 0.0};
                DrawTextureEx(_midgroundImage, _midgroundPos, 0.0, 2.0, WHITE);
                Vector2 _midgroundBPos = {_midgroundX + _midgroundImage.width*2, 0.0};
                DrawTextureEx(_midgroundImage, _midgroundBPos, 0.0, 2.0, WHITE);

                //draw foreground
                Vector2 _foregroundPos = {_foregroundX, 0.0};
                DrawTextureEx(_foregroundImage, _foregroundPos, 0.0, 2.0, WHITE);
                Vector2 _foregroundBPos = {_foregroundX + _foregroundImage.width*2, 0.0};
                DrawTextureEx(_foregroundImage, _foregroundBPos, 0.0, 2.0, WHITE);

                //perform ground check
                if (isGrounded(_player, _windowDimensions[1]))
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
                for (int i = 0; i < _hazardCount; i++)
                {
                        _hazards[i].pos.x += _hazardVelocityX * dT;
                }

                //update finish line position
                _finishLine += _hazardVelocityX * dT;

                //update player animation frame
                if (_isGrounded)
                {
                      _player = updateAnimData(_player, dT, _playerSpriteSheetRowCount - 1);  
                }

                for (int i = 0; i < _hazardCount; i++)
                {
                        //update hazard animation frame
                        _hazards[i] = updateAnimData(_hazards[i], dT, _hazardSpriteSheetRowCount - 1);
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
        UnloadTexture(_backgroundImage);
        UnloadTexture(_midgroundImage);
        UnloadTexture(_foregroundImage);
        CloseWindow();
}
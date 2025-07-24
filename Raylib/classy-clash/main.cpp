#include "raylib.h"
#include "raymath.h"

int main()
{ 
        //window properties
        const int _windowWidth = 384;
        const int _windowHeight = 384;
        int _targetFramerate = 60;

        //initialize window
        InitWindow(_windowWidth, _windowHeight, "Classy Clash");
        SetTargetFPS(_targetFramerate);

        //map properties
        Texture2D _worldMap = LoadTexture("assets/maps/worldMap/WorldMap.png");
        Vector2 _worldMapPos = {0, 0};
        float _mapMoveSpeed{4.0};

        //player properties
        Texture2D _playerSpritesheet = LoadTexture("assets/characters/knight_idle_spritesheet.png");
        int _playerSpritesheetRowCount = 6;
        int _playerSpritesheetColumnCount = 1;
        float _playerScale = 4.0f;
        Vector2 _playerPos = { 
                (float)_windowWidth / 2.0f - _playerScale * (0.5 * (float)_playerSpritesheet.width / _playerSpritesheetRowCount), 
                (float)_windowHeight / 2.0f - _playerScale * ( 0.5f * (float)_playerSpritesheet.height / _playerSpritesheetColumnCount)
        };

        while(!WindowShouldClose())
        {
                //Start Drawing
                BeginDrawing();
                ClearBackground(WHITE);

                Vector2 direction{};
                if (IsKeyDown(KEY_A))
                {
                        direction.x -= 1.0f;
                }
                if (IsKeyDown(KEY_A)) direction.x -= 1.0f;
                if (IsKeyDown(KEY_D)) direction.x += 1.0f;
                if (IsKeyDown(KEY_W)) direction.y -= 1.0f;
                if (IsKeyDown(KEY_S)) direction.y += 1.0f;
                if (Vector2Length(direction) != 0.0)
                {
                        _worldMapPos = Vector2Subtract(_worldMapPos, Vector2Scale( Vector2Normalize(direction) * _mapMoveSpeed, _mapMoveSpeed));
                }

                //Draw the world map
                DrawTextureEx(_worldMap, _worldMapPos, 0.0f, 4.0f, WHITE);

                //Draw the player
                Rectangle _playerSourceRec = {0.0f, 0.0f, (float)_playerSpritesheet.width / _playerSpritesheetRowCount, (float)_playerSpritesheet.height / _playerSpritesheetColumnCount};
                Rectangle _playerDestRec = {_playerPos.x, _playerPos.y, _playerScale * (float)_playerSpritesheet.width / _playerSpritesheetRowCount, _playerScale * (float)_playerSpritesheet.height / _playerSpritesheetColumnCount};
                
                DrawTexturePro(_playerSpritesheet, _playerSourceRec, _playerDestRec, (Vector2){}, 0.0f, WHITE);

                //Stop Drawing
                EndDrawing();
        }
        CloseWindow();
}
#include "raylib.h"
#include "raymath.h"
#include "Character.h"

int main()
{
        // window properties
        const int _windowWidth = 384;
        const int _windowHeight = 384;
        int _targetFramerate = 60;

        // initialize window
        InitWindow(_windowWidth, _windowHeight, "Classy Clash");
        SetTargetFPS(_targetFramerate);

        Character _player;
        _player.setScreenPos(_windowWidth, _windowHeight);

        // map properties
        Texture2D _worldMap = LoadTexture("assets/maps/worldMap/WorldMap.png");
        Vector2 _worldMapPos = {0, 0};

        while (!WindowShouldClose())
        {
                // Start Drawing
                BeginDrawing();
                ClearBackground(WHITE);

                _worldMapPos = Vector2Scale(_player.getWorldPos(), -1.0f);

                // Draw the world map
                DrawTextureEx(_worldMap, _worldMapPos, 0.0f, 4.0f, WHITE);

                _player.tick(GetFrameTime());

                // Stop Drawing
                EndDrawing();
        }
        UnloadTexture(_worldMap);
        // UnloadTexture(_playerSpritesheet);
        // UnloadTexture(_playerIdleSpritesheet);
        // UnloadTexture(_playerRunSpritesheet);
        CloseWindow();
}
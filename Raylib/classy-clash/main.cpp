#include "raylib.h"
#include "raymath.h"
#include "Character.h"
#include "Prop.h"

int main()
{
        // window properties
        const int _windowWidth = 384;
        const int _windowHeight = 384;
        int _targetFramerate = 60;

        // initialize window
        InitWindow(_windowWidth, _windowHeight, "Classy Clash");
        SetTargetFPS(_targetFramerate);

        Character _player(_windowWidth, _windowHeight);

        // map properties
        Texture2D _worldMap = LoadTexture("assets/maps/worldMap/WorldMap.png");
        Vector2 _worldMapPos = {0, 0};
        const float _worldMapScale{4.0f};

        // load props
        Prop _rock(Vector2{0.0f, 0.0f}, LoadTexture("assets/sprites/Rock.png"));

        while (!WindowShouldClose())
        {
                // Start Drawing
                BeginDrawing();
                ClearBackground(WHITE);

                _worldMapPos = Vector2Scale(_player.getWorldPos(), -1.0f);

                // Draw the world map
                DrawTextureEx(_worldMap, _worldMapPos, 0.0f, _worldMapScale, WHITE);

                // Draw props
                _rock.Render(_player.getWorldPos());

                _player.tick(GetFrameTime());

                // check map bounds
                if (_player.getWorldPos().x < 0.0f || // TODO: make bounds into variables
                    _player.getWorldPos().y < 0.0f ||
                    _player.getWorldPos().x + _windowWidth > _worldMap.width * _worldMapScale ||
                    _player.getWorldPos().y + _windowHeight > _worldMap.height * _worldMapScale)
                {
                        _player.undoMovement();
                }
                // Stop Drawing
                EndDrawing();
        }
        UnloadTexture(_worldMap);
        // UnloadTexture(_playerSpritesheet);
        // UnloadTexture(_playerIdleSpritesheet);
        // UnloadTexture(_playerRunSpritesheet);
        CloseWindow();
}
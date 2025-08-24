#include "raylib.h"
#include "raymath.h"
#include "Character.h"
#include "Prop.h"
#include "Enemy.h"
#include <string>

int main()
{
        // window properties
        const int _windowWidth = 384;
        const int _windowHeight = 384;
        int _targetFramerate = 60;

        // initialize window
        InitWindow(_windowWidth, _windowHeight, "Classy Clash");

        Character _player(_windowWidth, _windowHeight);

        // map properties
        Texture2D _worldMap = LoadTexture("assets/maps/worldMap/WorldMap.png");
        Vector2 _worldMapPos = {0, 0};
        const float _worldMapScale{4.0f};

        // setup props
        Prop _props[2]{
            Prop{Vector2{600.0f, 300.0f}, LoadTexture("assets/sprites/Rock.png")},
            Prop{Vector2{400.0f, 500.0f}, LoadTexture("assets/sprites/Log.png")}};

        // enemy properties
        Enemy _goblin{
            Vector2{},
            LoadTexture("assets/characters/goblin_idle_spritesheet.png"),
            LoadTexture("assets/characters/goblin_run_spritesheet.png")};

        _goblin.setTarget(&_player);

        SetTargetFPS(_targetFramerate);
        while (!WindowShouldClose())
        {
                // start Drawing
                BeginDrawing();
                ClearBackground(WHITE);

                _worldMapPos = Vector2Scale(_player.getWorldPos(), -1.0f);

                // draw the world map
                DrawTextureEx(_worldMap, _worldMapPos, 0.0f, _worldMapScale, WHITE);

                // draw props
                for (auto prop : _props)
                {
                        prop.Render(_player.getWorldPos());
                }

                // draw player
                if (!_player.getAlive())
                {
                       DrawText("Game Over!", 55.0f, 45.0f, 40, RED);
                       EndDrawing();
                       continue;
                }
                else
                {
                        std::string playerHealth = "Health: ";
                        playerHealth.append(std::to_string(_player.getHealth()), 0, 5);
                        DrawText(playerHealth.c_str(), 55.0f, 45.0f, 40, RED);
                }

                _player.tick(GetFrameTime());

                // check map bounds
                if (_player.getWorldPos().x < 0.0f || // TODO: make bounds into variables
                    _player.getWorldPos().y < 0.0f ||
                    _player.getWorldPos().x + _windowWidth > _worldMap.width * _worldMapScale ||
                    _player.getWorldPos().y + _windowHeight > _worldMap.height * _worldMapScale)
                {
                        _player.undoMovement();
                }

                // check prop collisions
                for (auto prop : _props)
                {
                        if (CheckCollisionRecs(prop.getCollisionRect(_player.getWorldPos()), _player.getCollisionRect()))
                        {
                                _player.undoMovement();
                        }
                }

                _goblin.tick(GetFrameTime());

                // stop drawing
                EndDrawing();

                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                {
                        if (CheckCollisionRecs(_goblin.getCollisionRect(), _player.getWeaponCollisionRect()))
                        {
                                _goblin.setAlive(false);
                        }
                }
        }
        UnloadTexture(_worldMap);
        // UnloadTexture(_playerSpritesheet);
        // UnloadTexture(_playerIdleSpritesheet);
        // UnloadTexture(_playerRunSpritesheet);
        CloseWindow();
}
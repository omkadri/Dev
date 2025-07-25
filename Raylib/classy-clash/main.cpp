#include "raylib.h"
#include "raymath.h"

class Character
{
public:
        Vector2 getWorldPos() const { return worldPos; }
        void setScreenPos(int windowWidth, int windowHeight);
        void tick(float deltaTime);

private:
        Texture2D defaultSpritesheet{LoadTexture("assets/characters/knight_idle_spritesheet.png")};
        int defaultSpritesheetRowCount{6};
        int defaultSpritesheetColumnCount{1};
        Texture2D idleSpritesheet{LoadTexture("assets/characters/knight_idle_spritesheet.png")};
        ;
        Texture2D runSpritesheet{LoadTexture("assets/characters/knight_run_spritesheet.png")};
        ;
        Vector2 screenPos;
        Vector2 worldPos;
        // 1 = facing right, -1 = facing left
        float rightLeft{1.0f};
        // animation variables
        float runningTime{1.0f};
        int currentFrame{0};
        const int maxFrames{6};
        const float updateTime{1.0f / 12.0f}; // 12 frames per second
        const float speed{4.0f};
        const float scale{4.0f};
};

void Character::setScreenPos(int windowWidth, int windowHeight)
{
        screenPos = {
            (float)windowWidth / 2.0f - scale * (0.5f * (float)defaultSpritesheet.width / defaultSpritesheetRowCount),
            (float)windowHeight / 2.0f - scale * (0.5f * (float)defaultSpritesheet.height / defaultSpritesheetColumnCount)};
}

void Character::tick(float deltaTime)
{
        Vector2 direction{};
        if (IsKeyDown(KEY_A))
                direction.x -= 1.0f;
        if (IsKeyDown(KEY_D))
                direction.x += 1.0f;
        if (IsKeyDown(KEY_W))
                direction.y -= 1.0f;
        if (IsKeyDown(KEY_S))
                direction.y += 1.0f;
        if (Vector2Length(direction) != 0.0f)
        {
                // set the world position based on the direction and speed
                worldPos = Vector2Add(worldPos, Vector2Scale(Vector2Normalize(direction), speed));
                direction.x < 0.0f ? -1.0f : 1.0f;
                defaultSpritesheet = runSpritesheet;
        }
        else
        {
                defaultSpritesheet = idleSpritesheet;
        }

        // Update player animation
        runningTime += deltaTime;
        if (runningTime >= updateTime)
        {
                currentFrame++;
                runningTime = 0.0f;
                if (currentFrame > maxFrames)
                        currentFrame = 0;
        }
}

int main()
{
        // window properties
        const int _windowWidth = 384;
        const int _windowHeight = 384;
        int _targetFramerate = 60;

        // initialize window
        InitWindow(_windowWidth, _windowHeight, "Classy Clash");
        SetTargetFPS(_targetFramerate);

        // map properties
        Texture2D _worldMap = LoadTexture("assets/maps/worldMap/WorldMap.png");
        Vector2 _worldMapPos = {0, 0};
        float _mapMoveSpeed{4.0};

        // player properties
        Texture2D _playerSpritesheet = LoadTexture("assets/characters/knight_idle_spritesheet.png");
        Texture2D _playerIdleSpritesheet = LoadTexture("assets/characters/knight_idle_spritesheet.png");
        Texture2D _playerRunSpritesheet = LoadTexture("assets/characters/knight_run_spritesheet.png");
        int _playerSpritesheetRowCount = 6;
        int _playerSpritesheetColumnCount = 1;
        float _playerScale = 4.0f;
        Vector2 _playerPos = {
            (float)_windowWidth / 2.0f - _playerScale * (0.5 * (float)_playerSpritesheet.width / _playerSpritesheetRowCount),
            (float)_windowHeight / 2.0f - _playerScale * (0.5f * (float)_playerSpritesheet.height / _playerSpritesheetColumnCount)};
        // 1 = facing right, -1 = facing left
        float _playerRightLeft(1.0f);

        // player animation properties
        float _playerRunningTime{};
        int _playerCurrentFrame = 0;
        const int _playerMaxFrames = _playerSpritesheetRowCount;
        const float _playerUpdateTime = 1.0f / 12.0f; // 12 frames per second

        while (!WindowShouldClose())
        {
                // Start Drawing
                BeginDrawing();
                ClearBackground(WHITE);

                Vector2 direction{};
                if (IsKeyDown(KEY_A))
                {
                        direction.x -= 1.0f;
                }
                if (IsKeyDown(KEY_A))
                        direction.x -= 1.0f;
                if (IsKeyDown(KEY_D))
                        direction.x += 1.0f;
                if (IsKeyDown(KEY_W))
                        direction.y -= 1.0f;
                if (IsKeyDown(KEY_S))
                        direction.y += 1.0f;
                if (Vector2Length(direction) != 0.0)
                {
                        _worldMapPos = Vector2Subtract(_worldMapPos, Vector2Scale(Vector2Normalize(direction) * _mapMoveSpeed, _mapMoveSpeed));
                        direction.x < 0.0f ? _playerRightLeft = -1.0f : _playerRightLeft = 1.0f;
                        _playerSpritesheet = _playerRunSpritesheet;
                }
                else
                {
                        _playerSpritesheet = _playerIdleSpritesheet;
                }

                // Draw the world map
                DrawTextureEx(_worldMap, _worldMapPos, 0.0f, 4.0f, WHITE);

                // Update player animation
                _playerRunningTime += GetFrameTime();
                if (_playerRunningTime >= _playerUpdateTime)
                {
                        _playerCurrentFrame++;
                        _playerRunningTime = 0.0f;
                        if (_playerCurrentFrame > _playerMaxFrames)
                                _playerCurrentFrame = 0;
                }

                // Draw the player
                Rectangle _playerSourceRec = {_playerCurrentFrame * (float)_playerSpritesheet.width / _playerSpritesheetRowCount, 0.0f, _playerRightLeft * (float)_playerSpritesheet.width / _playerSpritesheetRowCount, (float)_playerSpritesheet.height / _playerSpritesheetColumnCount};
                Rectangle _playerDestRec = {_playerPos.x, _playerPos.y, _playerScale * (float)_playerSpritesheet.width / _playerSpritesheetRowCount, _playerScale * (float)_playerSpritesheet.height / _playerSpritesheetColumnCount};

                DrawTexturePro(_playerSpritesheet, _playerSourceRec, _playerDestRec, (Vector2){}, 0.0f, WHITE);

                // Stop Drawing
                EndDrawing();
        }
        UnloadTexture(_worldMap);
        UnloadTexture(_playerSpritesheet);
        UnloadTexture(_playerIdleSpritesheet);
        UnloadTexture(_playerRunSpritesheet);
        CloseWindow();
}
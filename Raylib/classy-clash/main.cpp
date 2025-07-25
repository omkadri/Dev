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
        Vector2 screenPos{};
        Vector2 worldPos{};
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
                direction.x < 0.f ? rightLeft = -1.f : rightLeft = 1.0f;
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

        // Draw the player
        Rectangle source = {currentFrame * (float)defaultSpritesheet.width / defaultSpritesheetRowCount, 0.0f, rightLeft * (float)defaultSpritesheet.width / defaultSpritesheetRowCount, (float)defaultSpritesheet.height / defaultSpritesheetColumnCount};
        Rectangle dest = {screenPos.x, screenPos.y, scale * (float)defaultSpritesheet.width / defaultSpritesheetRowCount, scale * (float)defaultSpritesheet.height / defaultSpritesheetColumnCount};

        DrawTexturePro(defaultSpritesheet, source, dest, (Vector2){}, 0.0f, WHITE);
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
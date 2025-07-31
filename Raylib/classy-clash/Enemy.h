#include "raylib.h"
#include "BaseCharacter.h"

class Enemy : public BaseCharacter
{
public:
        Enemy(Vector2 pos, Texture2D idleSpritesheet, Texture2D runSpritesheet);
        Vector2 getWorldPos() const { return worldPos; }
        void tick(float deltaTime);
        void undoMovement();
        Rectangle getCollisionRect();

private:
        Texture2D defaultSpritesheet{LoadTexture("assets/characters/knight_idle_spritesheet.png")};
        int defaultSpritesheetRowCount{6};
        int defaultSpritesheetColumnCount{1};
        Texture2D idleSpritesheet{LoadTexture("assets/characters/knight_idle_spritesheet.png")};
        Texture2D runSpritesheet{LoadTexture("assets/characters/knight_run_spritesheet.png")};
        Vector2 screenPos{};
        Vector2 worldPos{};
        Vector2 worldPosLastFrame{};
        // 1 = facing right, -1 = facing left
        float rightLeft{1.0f};
        // animation variables
        float runningTime{1.0f};
        int currentFrame{0};
        int maxFrames{6};
        float updateTime{1.0f / 12.0f}; // 12 frames per second
        float speed{4.0f};
        float scale{4.0f};
        float width{};
        float height{};
};
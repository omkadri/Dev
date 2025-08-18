#ifndef BASE_CHARACTER_H
#define BASE_CHARACTER_H // This is a check to prevent multiple inclusions of this header file
#include "raylib.h"

class BaseCharacter
{
public:
        BaseCharacter();
        Vector2 getWorldPos() const { return worldPos; }
        void undoMovement();
        Rectangle getCollisionRect();
        virtual void tick(float deltaTime);
        virtual Vector2 getScreenPos() = 0;

protected:
        Texture2D defaultSpritesheet{LoadTexture("assets/characters/knight_idle_spritesheet.png")};
        int defaultSpritesheetRowCount{6};
        int defaultSpritesheetColumnCount{1};
        Texture2D idleSpritesheet{LoadTexture("assets/characters/knight_idle_spritesheet.png")};
        Texture2D runSpritesheet{LoadTexture("assets/characters/knight_run_spritesheet.png")};
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
        Vector2 velocity{};

private:
};

#endif
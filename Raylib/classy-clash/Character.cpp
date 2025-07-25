#include "Character.h"
#include "raymath.h"

Character::Character(int windowWidth, int windowHeight)
{
        width = defaultSpritesheet.width / defaultSpritesheetRowCount;
        height = defaultSpritesheet.height / defaultSpritesheetColumnCount;
        screenPos = {
            static_cast<float>(windowWidth) / 2.0f - scale * (0.5f * (float)width),
            static_cast<float>(windowHeight) / 2.0f - scale * (0.5f * (float)height)};
}

void Character::tick(float deltaTime)
{
        worldPosLastFrame = worldPos;
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
        Rectangle source = {currentFrame * (float)width, 0.0f, rightLeft * (float)width, (float)height};
        Rectangle dest = {screenPos.x, screenPos.y, scale * (float)width, scale * (float)height};

        DrawTexturePro(defaultSpritesheet, source, dest, (Vector2){}, 0.0f, WHITE);
}

void Character::undoMovement()
{
        worldPos = worldPosLastFrame;
}
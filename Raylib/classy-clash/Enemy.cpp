#include "Enemy.h"

Enemy::Enemy(Vector2 pos, Texture2D idleSpritesheet, Texture2D runSpritesheet)
{
        worldPos = pos;
        defaultSpritesheet = idleSpritesheet;
        idleSpritesheet = idleSpritesheet;
        runSpritesheet = runSpritesheet;

        width = defaultSpritesheet.width / defaultSpritesheetRowCount;
        height = defaultSpritesheet.height / defaultSpritesheetColumnCount;
}

void Enemy::tick(float deltaTime)
{
        worldPosLastFrame = worldPos;

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
        Rectangle source = {currentFrame * (float)width, 0.0f, rightLeft * (float)width, (float)height}; // TODO: use static_cast<float>
        Rectangle dest = {screenPos.x, screenPos.y, scale * (float)width, scale * (float)height};        // TODO: use static_cast<float>

        DrawTexturePro(defaultSpritesheet, source, dest, (Vector2){}, 0.0f, WHITE);
}
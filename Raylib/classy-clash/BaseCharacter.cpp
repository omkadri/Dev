#include "BaseCharacter.h"

BaseCharacter::BaseCharacter()
{
}

void BaseCharacter::tick(float deltaTime)
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

void BaseCharacter::undoMovement()
{
        worldPos = worldPosLastFrame;
}

Rectangle BaseCharacter::getCollisionRect()
{
        return Rectangle{screenPos.x, screenPos.y, width * scale, height * scale};
}
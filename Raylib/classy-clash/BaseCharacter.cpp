#include "BaseCharacter.h"
#include "raymath.h"

BaseCharacter::BaseCharacter()
{
}

void BaseCharacter::undoMovement()
{
        worldPos = worldPosLastFrame;
}

Rectangle BaseCharacter::getCollisionRect()
{
        return Rectangle{
            getScreenPos().x,
            getScreenPos().y,
            width * scale,
            height * scale};
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

        if (Vector2Length(velocity) != 0.0f)
        {
                // set the world position based on the direction and speed
                worldPos = Vector2Add(worldPos, Vector2Scale(Vector2Normalize(velocity), speed));
                velocity.x < 0.f ? rightLeft = -1.f : rightLeft = 1.0f;
                defaultSpritesheet = runSpritesheet;
        }
        else
        {
                defaultSpritesheet = idleSpritesheet;
        }
        velocity = {};

        // Draw the player
        Rectangle source = {currentFrame * (float)width, 0.0f, rightLeft * (float)width, (float)height};    // TODO: use static_cast<float>
        Rectangle dest = {getScreenPos().x, getScreenPos().y, scale * (float)width, scale * (float)height}; // TODO: use static_cast<float>
        DrawTexturePro(defaultSpritesheet, source, dest, (Vector2){}, 0.0f, WHITE);
}
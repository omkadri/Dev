#include "Character.h"
#include "raymath.h"

Character::Character(int windowWidth, int windowHeight)
{
        width = defaultSpritesheet.width / defaultSpritesheetRowCount;
        height = defaultSpritesheet.height / defaultSpritesheetColumnCount;
        screenPos = {
            static_cast<float>(windowWidth) / 2.0f - scale * (0.5f * width),
            static_cast<float>(windowHeight) / 2.0f - scale * (0.5f * height)};
}

void Character::tick(float deltaTime)
{
        BaseCharacter::tick(deltaTime); // Call the base class tick to handle animation and drawing

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
}
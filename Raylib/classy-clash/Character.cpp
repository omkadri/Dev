#include "Character.h"
#include "raymath.h"

Character::Character(int windowWidth, int windowHeight) : 
        windowWidth(windowWidth), 
        windowHeight(windowHeight)
{
        width = defaultSpritesheet.width / defaultSpritesheetRowCount;
        height = defaultSpritesheet.height / defaultSpritesheetColumnCount;
}

Vector2 Character::getScreenPos()
{
        return Vector2{
                static_cast<float>(windowWidth) / 2.0f - scale * (0.5f * width),
                static_cast<float>(windowHeight) / 2.0f - scale * (0.5f * height)
        };
}

void Character::tick(float deltaTime)
{
        if (!getAlive()) { return; }

        if (IsKeyDown(KEY_A))
                velocity.x -= 1.0f;
        if (IsKeyDown(KEY_D))
                velocity.x += 1.0f;
        if (IsKeyDown(KEY_W))
                velocity.y -= 1.0f;
        if (IsKeyDown(KEY_S))
                velocity.y += 1.0f;

        BaseCharacter::tick(deltaTime); // Call the base class tick to handle animation and drawing

        Vector2 origin{};
        Vector2 swordOffset{};
        float rotation{};
        if (rightLeft > 0.f)
        {
                origin = {0.0f, weaponTexture.height * scale};
                swordOffset = {35.0f, 55.0f};
                weaponCollisionRect = {
                        getScreenPos().x + swordOffset.x,
                        getScreenPos().y + swordOffset.y - weaponTexture.height * scale,
                        weaponTexture.width * scale,
                        weaponTexture.height * scale
                };
                rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? 35.0f : 0.0f;
        }
        else
        {
                origin = {weaponTexture.width * scale, weaponTexture.height * scale};
                swordOffset = {25.0f, 55.0f};
                weaponCollisionRect = {
                        getScreenPos().x + swordOffset.x - weaponTexture.width * scale,
                        getScreenPos().y + swordOffset.y - weaponTexture.height * scale,
                        weaponTexture.width * scale,
                        weaponTexture.height * scale
                };
                rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? -35.0f : 0.0f;
        }

        //draw weapon
        Rectangle source{0.0f, 0.0f, static_cast<float>(weaponTexture.width) * rightLeft, static_cast<float>(weaponTexture.height)};
        Rectangle dest{getScreenPos().x + swordOffset.x, getScreenPos().y + swordOffset.y, weaponTexture.width * scale, weaponTexture.height * scale};
        DrawTexturePro(weaponTexture, source, dest, origin, rotation, WHITE);

        DrawRectangleLines(
                weaponCollisionRect.x, weaponCollisionRect.y, weaponCollisionRect.width, weaponCollisionRect.height, RED
        );
}
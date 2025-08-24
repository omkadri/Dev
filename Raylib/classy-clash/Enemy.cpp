#include "Enemy.h"
#include "raymath.h"

Enemy::Enemy(Vector2 pos, Texture2D idleSpritesheet, Texture2D runSpritesheet)
{
        worldPos = pos;
        defaultSpritesheet = idleSpritesheet;
        idleSpritesheet = idleSpritesheet;
        runSpritesheet = runSpritesheet;

        width = defaultSpritesheet.width / defaultSpritesheetRowCount;
        height = defaultSpritesheet.height / defaultSpritesheetColumnCount;
        speed = 2.5f;
}

void Enemy::tick(float deltaTime)
{
        if (!getAlive()) { return; }

        //Calculate velocity towards target
        velocity = Vector2Subtract(target->getScreenPos(), getScreenPos()); // VectorA + VectorB = VectorC or VectorB = VectorC - VectorA
        BaseCharacter::tick(deltaTime); // Call the base class tick to handle animation and drawing
}

Vector2 Enemy::getScreenPos()
{
        return Vector2Subtract(worldPos, target->getWorldPos());
}
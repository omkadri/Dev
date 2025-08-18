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
        speed = 3.5f;
}

void Enemy::tick(float deltaTime)
{
        //Get ToTarget vector
        Vector2 toTarget = Vector2Subtract(target->getScreenPos(), screenPos); // VectorA + VectorB = VectorC or VectorB = VectorC - VectorA

        // Normalize ToTarget vector
        toTarget = Vector2Normalize(toTarget);// We normalize the vector to get a unil value of 1.0f. Otherwise, the speed would be affected by the distance to the target.

        // multiply ToTarget by speed
        toTarget = Vector2Scale(toTarget, speed);

        // Move Enemy(set worldPos )
        worldPos = Vector2Add(worldPos, toTarget);

        screenPos = Vector2Subtract(worldPos, target->getWorldPos());
        BaseCharacter::tick(deltaTime); // Call the base class tick to handle animation and drawing
}
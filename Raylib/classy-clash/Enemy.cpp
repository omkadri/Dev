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
}

void Enemy::tick(float deltaTime)
{
        screenPos = Vector2Subtract(worldPos, target->getWorldPos());
        BaseCharacter::tick(deltaTime); // Call the base class tick to handle animation and drawing
}
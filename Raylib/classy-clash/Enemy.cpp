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
        BaseCharacter::tick(deltaTime); // Call the base class tick to handle animation and drawing
}
#include "Prop.h"
#include "raymath.h"

Prop::Prop(Vector2 pos, Texture2D texture) : worldPos(pos), texture(texture)
{
}

void Prop::Render(Vector2 playerPos)
{
        Vector2 screenPos{Vector2Subtract(worldPos, playerPos)}; // TODO: Investigate drawing props in relation to world origin
        DrawTextureEx(texture, screenPos, 0.f, scale, WHITE);
}

Rectangle Prop::getCollisionRect(Vector2 playerPos)
{
        Vector2 screenPos{Vector2Subtract(worldPos, playerPos)}; // TODO: Investigate drawing props in relation to world origin
        return Rectangle{screenPos.x, screenPos.y, texture.width * scale, texture.height * scale};
}
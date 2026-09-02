#include "raylib.h"
#include "raymath.h"

class Prop
{
public:
        Prop(Vector2 pos, Texture2D texture);
        void Render(Vector2 playerPos);
        Rectangle getCollisionRect(Vector2 playerPos);

private:
        Vector2 worldPos{};
        Texture2D texture{};
        float scale{4.0f};
};
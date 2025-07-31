#include "raylib.h"
#include "BaseCharacter.h"

class Enemy : public BaseCharacter
{
public:
        Enemy(Vector2 pos, Texture2D idleSpritesheet, Texture2D runSpritesheet);
        void tick(float deltaTime);

private:
};
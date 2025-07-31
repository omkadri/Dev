#include "raylib.h"
#include "BaseCharacter.h"

class Enemy : public BaseCharacter
{
public:
        Enemy(Vector2 pos, Texture2D idleSpritesheet, Texture2D runSpritesheet);
        virtual void tick(float deltaTime) override;

private:
};
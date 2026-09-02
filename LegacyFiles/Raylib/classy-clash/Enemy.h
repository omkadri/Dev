#include "raylib.h"
#include "BaseCharacter.h"
#include "Character.h"

class Enemy : public BaseCharacter
{
public:
        Enemy(Vector2 pos, Texture2D idleSpritesheet, Texture2D runSpritesheet);
        virtual void tick(float deltaTime) override;
        void setTarget(Character *character) { target = character; }
        virtual Vector2 getScreenPos() override;

private:
        Character *target;
        float damagePerSec{10.f};
        float chaseRadius{25.0f};
};
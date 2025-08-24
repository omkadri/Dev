#ifndef CHARACTER_H
#define CHARACTER_H // This is a check to prevent multiple inclusions of this header file

#include "raylib.h"
#include "BaseCharacter.h"

class Character : public BaseCharacter
{
public:
        Character(int windowWidth, int windowHeight);
        virtual void tick(float deltaTime) override;
        virtual Vector2 getScreenPos() override;
        Rectangle getWeaponCollisionRect() { return weaponCollisionRect; }

private:
        int windowWidth{};
        int windowHeight{};
        Texture2D weaponTexture{LoadTexture("assets/characters/weapon_sword.png")};
        Rectangle weaponCollisionRect{};
};

#endif
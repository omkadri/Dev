#include "BaseCharacter.h"

BaseCharacter::BaseCharacter()
{
}

void BaseCharacter::undoMovement()
{
        worldPos = worldPosLastFrame;
}

Rectangle BaseCharacter::getCollisionRect()
{
        return Rectangle{screenPos.x, screenPos.y, width * scale, height * scale};
}
#ifndef WEAPON_H
#define WEAPON_H

#include "PowerUp.h"

class Weapon : public PowerUp
{
public:
    Weapon(const char* name, Vertex position) :
        PowerUp(name, position)
    {
        mType = WEAPON; // ERROR 1: `mType` may not be defined in the base class `PowerUp` (ensure `mType` exists and is initialized in the base class)
    }
};

#endif // WEAPON_H


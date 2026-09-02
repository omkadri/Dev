#ifndef POWER_UP_H
#define POWER_UP_H

#include "Vertex.h"
#include <string.h>

class PowerUp
{
public:
    PowerUp(const char* name, Vertex position)
    {
        mPosition = position;
        mName = new char [strlen(name) + 1]; //FIX: memory allocation did not account for null terminator
        strcpy(mName, name); // ERROR: Possible buffer overflow if name is larger than allocated space
        mType = NONE; // FIX: `mType` is now initialized, which will prevent undefined behavior
    }

    ~PowerUp()
    {
        delete[] mName; // FIX: replaced delete with delete[] for array allocation
    }

    enum PowerUpType
    {
        NONE, //FIX: Added NONE for default value initialization.
        WEAPON,
        ARMOUR,  // MINOR ISSUE: Inconsistent spelling of Armor
        HEALTH
    };

    PowerUpType GetPowerUpType() const
    {
        return(mType);
    };

    const Vertex& GetPosition() const
    {
        return(mPosition);
    }

protected:
    Vertex      mPosition;
    PowerUpType mType;
    char*       mName;
};

#endif // POWER_UP_H
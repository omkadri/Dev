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
        mName = new char [strlen(name)]; // ERROR 1: Memory allocation does not account for the null terminator (should be strlen(name) + 1)
        strcpy(mName, name); // ERROR 2: Possible buffer overflow if name is larger than allocated space
    }

    ~PowerUp()
    {
        delete mName; // ERROR 3: Missing delete[] for array allocation (delete[] should be used, not delete)
    }

    enum PowerUpType
    {
        WEAPON,
        ARMOUR, 
        HEALTH
    };

    PowerUpType GetPowerUpType() const
    {
        return(mType); // ERROR 4: `mType` is uninitialized in the constructor, may lead to undefined behavior
    };

    const Vertex& GetPosition() const
    {
        return(mPosition);
    }

protected:
    Vertex      mPosition;
    PowerUpType mType; // ERROR 5: `mType` is not initialized, could cause undefined behavior
    char*       mName;
};

#endif // POWER_UP_H

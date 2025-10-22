#ifndef HEALTH_H
#define HEALTH_H

#include "PowerUp.h"

class Health : public PowerUp
{
public:
    Health(const char* name, Vertex position) :
        PowerUp(name, position)
    {
        mType = HEALTH; // ERROR 1: `mType` may not be defined in the base class `PowerUp` (ensure `mType` exists in the base class and is initialized correctly)
    }
    
protected:
    float healing; // ERROR 2: `healing` is uninitialized, which could lead to undefined behavior when used
};

#endif // HEALTH_H


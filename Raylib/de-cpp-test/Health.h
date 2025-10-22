#ifndef HEALTH_H
#define HEALTH_H

#include "PowerUp.h"

class Health : public PowerUp
{
public:
    Health(const char* name, Vertex position, float healingAmount = 50.0f) :
        PowerUp(name, position),
        healing(healingAmount) //FIX: Initialized healing to prevent garbage issues
    {
        mType = HEALTH;
    }
    
protected:
    float healing;
};

#endif // HEALTH_H


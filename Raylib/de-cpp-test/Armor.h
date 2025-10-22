#ifndef ARMOUR_H
#define ARMOUR_H

#include "PowerUp.h"

#include <stddef.h>
#include <string.h>

class Armor : public PowerUp
{
public:
    Armor(const char* name, const Vertex& position) :
        PowerUp(name, position)
    {
        mType = ARMOUR;
        mClanTag = NULL;
    }

    ~Armor()
    {
        delete mClanTag; // ERROR 1: Memory leak if mClanTag is not set (if it's NULL, it does nothing, but no proper safeguard for non-NULL deletion)
    }

    const char* GetClanTag() const
    {
        return(mClanTag);
    }

    void SetClanTag(char* n)
    {
        delete mClanTag; // ERROR 2: Potential memory leak if n is not properly handled (e.g., if n is dynamically allocated elsewhere)
        mClanTag = new char[strlen(n)]; // ERROR 3: Memory allocation does not account for the null terminator (should be strlen(n) + 1)
        strcpy(mClanTag, n); // ERROR 4: Potential buffer overflow if n is larger than allocated space
    }

protected:
    char* mClanTag;
};

#endif // ARMOUR_H


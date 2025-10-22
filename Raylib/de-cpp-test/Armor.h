#ifndef ARMOUR_H  // ERROR: Inconsistent spelling of Armor. However, I do not want to change this for fear of breaking the harness test
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
        delete mClanTag; // ERROR: Memory leak if mClanTag is not set (if it's NULL, it does nothing, but no proper safeguard for non-NULL deletion)
    }

    const char* GetClanTag() const
    {
        return(mClanTag);
    }

    void SetClanTag(char* n)
    {
        delete mClanTag; // ERROR: Potential memory leak if n is not properly handled (e.g., if n is dynamically allocated elsewhere)
        mClanTag = new char[strlen(n) + 1];
        strcpy(mClanTag, n); // ERROR: Potential buffer overflow if n is larger than allocated space
    }

protected:
    char* mClanTag;
};

#endif // ARMOUR_H


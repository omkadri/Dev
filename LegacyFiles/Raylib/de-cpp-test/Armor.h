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
        mClanTag = nullptr;//FIX: replaced NULL with nullptr for type saftey
    }

    ~Armor()
    {
        delete[] mClanTag; // FIX: replaced delete with delete[] for array allocation
    }

    const char* GetClanTag() const
    {
        return(mClanTag);
    }

    void SetClanTag(char* n)
    {
        if (n != nullptr) //FIX: We only want to reallocate memory if 'n' is not nullptr.
        {
            
            delete[] mClanTag;
            mClanTag = new char[strlen(n) + 1];
            strcpy(mClanTag, n); // ERROR: Possible buffer overflow if name is larger than allocated space
        } 
        else //FIX: If 'n' is nullptr, we do not want to call strcpy() becuase it leads to undefined behaviour
        {
            delete[] mClanTag;
            mClanTag = nullptr;
        }
    }

protected:
    char* mClanTag;
};

#endif // ARMOUR_H
#ifndef PATH_NODE_H
#define PATH_NODE_H

#include "Vertex.h"

#include <cstring>

#include <vector>
#include <algorithm>
#include <cassert>


class PathNode;
typedef std::vector<PathNode*> PathNodes;

class PowerUp;
typedef std::vector<PowerUp*> PowerUps;

class PathNode
{
public:
    PathNode(const char* name, Vertex position) :
        mPosition(position)
    {
        mName = new char [strlen(name) + 1]; //FIX: memory allocation did not account for null terminator
        strcpy(mName, name);     // ERROR: Possible buffer overflow if name is larger than allocated space
    }
    
    ~PathNode()
    {
        delete[] mName;//FIX: Destructor now frees the allocated memory, preventing memory leak
    }

    void AddLink(PathNode *pathNode)
    {
        assert(pathNode != nullptr);
        mLinks.push_back(pathNode);
    }
    
    void RemoveLink(PathNode *pathNode)
    {
        assert(pathNode != nullptr);
        PathNodes::iterator i = std::find(mLinks.begin(), mLinks.end(), pathNode);
        if (i != mLinks.end()) //FIX: prevents undefined behaviour from occuring on an iterator equal to end()
        mLinks.erase(i);
    }
    
    void AddPowerUp(PowerUp *powerUp)
    {
        assert(powerUp != nullptr);
        mPowerUps.push_back(powerUp);
    }
    
    void RemovePowerUp(PowerUp *powerUp)
    {
        assert(powerUp != nullptr);
        PowerUps::iterator i = std::find(mPowerUps.begin(), mPowerUps.end(), powerUp);
        if (i != mPowerUps.end()) //FIX: prevents undefined behaviour from occuring on an iterator equal to end()
        mPowerUps.erase(i);
    }

    const char* GetName() const
    {
        return(mName);
    }

    const PathNodes& GetLinks() const
    {
        return(mLinks);
    }

    const PowerUps& GetPowerUps() const
    {
        return(mPowerUps); 
    }

protected:
    Vertex      mPosition;
    char*       mName;

    PathNodes   mLinks;
    PowerUps    mPowerUps;
};

#endif // PATH_NODE_H
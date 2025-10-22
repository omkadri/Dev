#include <stdio.h>
#include <queue>
#include <unordered_map>

#include "PathNode.h"
#include "PowerUp.h"
#include "Weapon.h"
#include "Health.h"
#include "Armor.h"


static PathNodes sPathNodes;
static PowerUps sPowerUps;

bool FindPowerUp(PathNodes& path, PowerUp::PowerUpType mType, PathNode *start)
{
    /* Example:
    path.push_back(start);
    path.push_back(secondNode);
    path.push_back(endNode);
    return(true);
    */

    // Early exit if the starting node is null or doesn't contain a power-up of the required type
    if (start == nullptr) return false;

    // BFS setup
    std::queue<PathNode*> toVisit; // Nodes to visit
    std::unordered_map<PathNode*, PathNode*> parentMap; // To reconstruct the path
    std::unordered_map<PathNode*, bool> visited; // To mark nodes as visited

    toVisit.push(start);
    visited[start] = true;

    // BFS loop
    while (!toVisit.empty())
    {
        PathNode* currentNode = toVisit.front();
        toVisit.pop();

        // Check if current node has the desired power-up type
        for (auto& powerUp : currentNode->GetPowerUps())
        {
            if (powerUp->GetPowerUpType() == mType)
            {
                // Power-up found, reconstruct path
                while (currentNode != nullptr)
                {
                    path.push_back(currentNode);
                    currentNode = parentMap[currentNode];
                }
                
                // The path is currently in reverse order, so reverse it
                std::reverse(path.begin(), path.end());
                return true;
            }
        }

        // Explore all linked nodes
        for (PathNode* neighbor : currentNode->GetLinks())
        {
            if (!visited[neighbor])
            {
                toVisit.push(neighbor);
                visited[neighbor] = true;
                parentMap[neighbor] = currentNode; // Keep track of the parent for path reconstruction
            }
        }
    }
    
    return(false); // No path found.
}

// For this example, all links are symmetric.
inline void LinkNodes(PathNode *n1, PathNode *n2)
{
    n1->AddLink(n2);
    n2->AddLink(n1);
}

int main(int, char*[])
{
    // ERROR 1: Memory Leak
    // These PathNode and PowerUp objects are allocated using 'new', but there is no corresponding delete for them, 
    // causing memory leaks at the end of the program when it finishes execution.
    sPathNodes.push_back(new PathNode("Node0", Vertex(300, 60, 0))); 
    sPathNodes.push_back(new PathNode("Node1", Vertex(100, 60, 0)));
    sPathNodes.push_back(new PathNode("Node2", Vertex(80, 560, 0)));
    sPathNodes.push_back(new PathNode("Node3", Vertex(280, 650, 0)));
    sPathNodes.push_back(new PathNode("Node4", Vertex(300, 250, 0)));
    sPathNodes.push_back(new PathNode("Node5", Vertex(450, 400, 0)));
    sPathNodes.push_back(new PathNode("Node6", Vertex(450, 60, 0)));
    sPathNodes.push_back(new PathNode("Node7", Vertex(450, 400, 0)));

    // ERROR 2: Inconsistent Node Links
    // The LinkNodes function is hardcoding relationships between nodes. If the pathfinding algorithm needs to adapt to a 
    // dynamically changing world, this approach could become problematic. Additionally, there seems to be a redundancy with 
    // some of the nodes (e.g., Node5 and Node7 both at position (450, 400, 0), which could cause logical issues).
    
    LinkNodes(sPathNodes[1], sPathNodes[4]);
    LinkNodes(sPathNodes[0], sPathNodes[1]);
    LinkNodes(sPathNodes[0], sPathNodes[6]);
    LinkNodes(sPathNodes[0], sPathNodes[4]);
    LinkNodes(sPathNodes[7], sPathNodes[4]);
    LinkNodes(sPathNodes[7], sPathNodes[5]);
    LinkNodes(sPathNodes[2], sPathNodes[4]);
    LinkNodes(sPathNodes[2], sPathNodes[3]);
    LinkNodes(sPathNodes[3], sPathNodes[5]);

    // ERROR 3: Potential Bad Pointer (Dangling Pointer)
    // Since the nodes and power-ups are dynamically allocated using 'new', but not deleted, 
    // there could be a risk of dereferencing invalid pointers or accessing memory that has been freed in the future.
    sPowerUps.push_back(new Weapon("Weapon0", Vertex(340, 670, 0)));
    sPathNodes[3]->AddPowerUp(sPowerUps[0]);    
    sPowerUps.push_back(new Weapon("Weapon1", Vertex(500, 220, 0)));
    sPathNodes[7]->AddPowerUp(sPowerUps[1]);    

    sPowerUps.push_back(new Health("Health0", Vertex(490, 10, 0)));
    sPathNodes[6]->AddPowerUp(sPowerUps[2]);    
    sPowerUps.push_back(new Health("Health1", Vertex(120, 20, 0)));
    sPathNodes[1]->AddPowerUp(sPowerUps[3]);    

    sPowerUps.push_back(new Armor("Armour0", Vertex(500, 360, 0)));
    sPathNodes[5]->AddPowerUp(sPowerUps[4]);    
    sPowerUps.push_back(new Armor("Armour1", Vertex(180, 525, 0)));
    sPathNodes[2]->AddPowerUp(sPowerUps[5]);    

    PathNodes path;

    // ERROR 4: No Check for Invalid Indices
    // When accessing `sPathNodes` and `sPowerUps` vectors with indices like `sPathNodes[3]`, if the vector size is less than 
    // or equal to the index, it will cause undefined behavior (out-of-bounds access). There should be checks or use of 
    // `at()` to avoid this issue.

    if(!FindPowerUp(path, PowerUp::WEAPON, sPathNodes[4]))
    {
        printf("No path found: IMPOSSIBLE!\n");
    }
    else
    {
        printf("Path found: ");

        for(PathNodes::iterator i = path.begin(); i != path.end(); ++i)
        {
            PathNode *n = *i;
            printf("%s ", n->GetName());
        }

        printf("\n");
    }
    // ERROR 5: Missing Memory Management
    // Since raw pointers are used for `PathNode` and `PowerUp` objects, and memory is not freed,
    // this results in a memory leak when the program finishes. Consider using smart pointers (`std::unique_ptr` or `std::shared_ptr`) 
    // for automatic memory management or manually deleting allocated memory.
    
    // ERROR 6: Hardcoded Coordinates and Node Names
    // The coordinates and names for nodes like "Node0", "Node1", etc., are hardcoded, which reduces flexibility. 
    // A better approach might be to read these values from a configuration file or generate them dynamically.

    // ERROR 7: Lack of Error Handling for Memory Allocation Failures
    // There is no error handling for memory allocation failures when using `new`. In case memory allocation fails, the program 
    // will continue to execute and might behave unpredictably. Adding error handling (e.g., checking if `new` returns `nullptr`) 
    // would be more robust.

    // ERROR 8: Duplicate PathNode Entries
    // The LinkNodes function does not check if a link between two nodes already exists. This can result in redundant links, 
    // causing unnecessary complexity in pathfinding algorithms or other operations.

     // THREAD SAFETY: Potential Data Race Issues
    // WARNING: Potential thread safety issues if this code is run in a multithreaded environment
    // Use proper synchronization (e.g., mutexes) to protect shared resources like sPathNodes and sPowerUps.
    
    // CONST CORRECTNESS: Function Parameters Should Be Const
    // The LinkNodes function doesn't modify the nodes passed to it, so marking it as 'const' would make the intent clearer.
    // Additionally, consider marking the FindPowerUp parameters as 'const' to avoid accidental modification.
    return(0);
}
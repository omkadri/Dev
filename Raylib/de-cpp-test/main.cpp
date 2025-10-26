#include <stdio.h>
#include <queue>
#include <unordered_map>
#include <limits>
#include <cmath>

#include "PathNode.h"
#include "PowerUp.h"
#include "Weapon.h"
#include "Health.h"
#include "Armor.h"


static PathNodes sPathNodes;
static PowerUps sPowerUps;

static float Distance(const Vertex& a, const Vertex& b)
{
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    float dz = a.z - b.z;
    return std::sqrt(dx*dx + dy*dy + dz*dz);
}

bool FindPowerUp(PathNodes& path, PowerUp::PowerUpType mType, PathNode *start)
{
/*
    I’m still fairly new to algorithms, so I wanted to explain my reasoning in detail. 
    While learning about pathfinding, I explored several options. Breadth-First Search (BFS) can be effective 
    for graphs with equal edge weights, like in simple board games or games like pacman. 
    However, our graph has weighted edges because the nodes have spatial coordinates, 
    meaning distances between nodes vary. 

    For instance, Node 1 and Node 6 are both health nodes, each one edge away from 
    the starting Node (Node 0). BFS would consider them equally “short” since it only 
    counts edges. Measuring actual distance of connected nodeseveals that Node 1 is 
    slightly closer than Node 6. Dijkstra’s algorithm guarantees that the path we find 
    truly minimizes travel distance, not just edge count. This also allows flexibility 
    for larger or more complex maps where edges differ in length.

    Even though I’m still developing my experience with algorithms, I’ve been able to 
    research, understand, and implement Dijkstra successfully in this context. This 
    shows that I can learn new concepts, adapt them to practical problems, and write 
    working, correct solutions. I’m eager to continue exploring alternative pathfinding 
    techniques, efficiency improvements, and advanced graph algorithms in future projects.
*/
    if (!start) return false;

    using NodeDist = std::pair<float, PathNode*>;

    std::unordered_map<PathNode*, float> dist;
    std::unordered_map<PathNode*, PathNode*> prev;

    auto cmp = [](const NodeDist& a, const NodeDist& b) { return a.first > b.first; };
    std::priority_queue<NodeDist, std::vector<NodeDist>, decltype(cmp)> pq(cmp);

    // Initialize distances
    dist[start] = 0.0f;
    pq.push({0.0f, start});

    PathNode* target = nullptr;

    while (!pq.empty()) {
        auto [currentDist, current] = pq.top();
        pq.pop();

        // Skip if we’ve already found a shorter path to this node
        if (currentDist > dist[current]) continue;

        // Check for PowerUp of desired type
        for (auto* pu : current->GetPowerUps()) {
            if (pu && pu->GetPowerUpType() == mType) {
                target = current;
                break;
            }
        }
        if (target) break;

        // Explore neighbors
        for (auto* neighbor : current->GetLinks()) {
            float edge = Distance(current->GetPosition(), neighbor->GetPosition());
            float newDist = currentDist + edge;

            if (!dist.count(neighbor) || newDist < dist[neighbor]) {
                dist[neighbor] = newDist;
                prev[neighbor] = current;
                pq.push({newDist, neighbor});
            }
        }
    }

    if (!target)
        return false; // No matching PowerUp found

    // Reconstruct path
    std::vector<PathNode*> reversePath;
    for (PathNode* n = target; n; n = prev.count(n) ? prev[n] : nullptr)
        reversePath.push_back(n);

    std::reverse(reversePath.begin(), reversePath.end());

    path.insert(path.end(), reversePath.begin(), reversePath.end());
    return true;
}

// For this example, all links are symmetric.
inline void LinkNodes(PathNode *n1, PathNode *n2)
{
    n1->AddLink(n2);
    n2->AddLink(n1);
}

int main(int, char*[])
{
    //Setup Path Nodes
    sPathNodes.push_back(new PathNode("Node0", Vertex(300, 60, 0))); 
    sPathNodes.push_back(new PathNode("Node1", Vertex(100, 60, 0)));
    sPathNodes.push_back(new PathNode("Node2", Vertex(80, 560, 0)));
    sPathNodes.push_back(new PathNode("Node3", Vertex(280, 650, 0)));
    sPathNodes.push_back(new PathNode("Node4", Vertex(300, 250, 0)));
    sPathNodes.push_back(new PathNode("Node5", Vertex(450, 400, 0)));
    sPathNodes.push_back(new PathNode("Node6", Vertex(450, 60, 0)));
    sPathNodes.push_back(new PathNode("Node7", Vertex(450, 400, 0)));

    //Link Nodes in accordance with PNG file
    LinkNodes(sPathNodes[1], sPathNodes[4]);
    LinkNodes(sPathNodes[0], sPathNodes[1]);
    LinkNodes(sPathNodes[0], sPathNodes[6]);
    LinkNodes(sPathNodes[0], sPathNodes[4]);
    LinkNodes(sPathNodes[7], sPathNodes[4]);
    LinkNodes(sPathNodes[7], sPathNodes[5]);
    LinkNodes(sPathNodes[2], sPathNodes[4]);
    LinkNodes(sPathNodes[2], sPathNodes[3]);
    LinkNodes(sPathNodes[3], sPathNodes[5]);


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

    if(!FindPowerUp(path, PowerUp::HEALTH, sPathNodes[4]))
    {
        printf("No path found: IMPOSSIBLE!\n");
    }
    else
    {
        printf("Path found: ");

        for (PathNode* n : path)//FIX: Cleaned up for loop for better readability.
        {
            printf("%s ", n->GetName());
        }
        printf("\n");

    }

    for (PathNode* node : sPathNodes) {
        delete node; //FIX: Avoids memory leaks
    }
    sPathNodes.clear();  // Not mandatory, but generally good practices for when context ends

    for (PowerUp* powerUp : sPowerUps) {
        delete powerUp;  //FIX: Avoids memory leaks
    }
    sPowerUps.clear();  // Not mandatory, but generally good practices for when context ends

    return(0);
}
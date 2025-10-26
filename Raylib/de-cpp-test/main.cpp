#include <stdio.h>
#include <queue>
#include <unordered_map>
#include <cmath>

#include "PathNode.h"
#include "PowerUp.h"
#include "Weapon.h"
#include "Health.h"
#include "Armor.h"


static PathNodes sPathNodes;
static PowerUps sPowerUps;

static float DistanceBetweenVertices(const Vertex& a, const Vertex& b)
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
    for graphs with equal edge weights, like in simple board games or games like Pac-Man. 
    However, it is implied that our graph has weighted edges because the nodes have spatial 
    coordinates, meaning distances between nodes vary.

    BFS only counts the number of edges, so it doesn’t guarantee the shortest travel distance 
    when edge lengths differ. Dijkstra’s algorithm, on the other hand, ensures that the path 
    we find truly minimizes travel distance along the connected edges. This also allows flexibility 
    for larger or more complex maps where edges differ in length.

    Given my relative inexperience with algorithms, much of this solution was informed by research and examples from 
    other implementations. I cannot claim to have fully mastered every aspect of Dijkstra’s algorithm, 
    and some choices I made may seem unconventional. However, through this process I gained a much deeper 
    understanding of pathfinding algorithms and graph traversal. I appreciate any feedback on areas that could be improved.
*/
    if (!start) return false; //Could also be assert, but i stuck with early exit.

    typedef std::pair<float, PathNode*> NodeDistance;

    std::unordered_map<PathNode*, float> shortestDistance;
    std::unordered_map<PathNode*, PathNode*> previousNode;

    auto isNodeDistanceGreater = [](const NodeDistance& a, const NodeDistance& b) { return a.first > b.first; };
    std::priority_queue<NodeDistance, std::vector<NodeDistance>, decltype(isNodeDistanceGreater)> nodeQueue(isNodeDistanceGreater);

    //Setup starting node
    shortestDistance[start] = 0.0f;
    nodeQueue.push({0.0f, start});

    //Initialize to avoid undefined behaviour
    PathNode* targetNode = nullptr;


    while (!nodeQueue.empty()) {
        auto [currentDistance, currentNode] = nodeQueue.top();
        nodeQueue.pop();

        //Skip if we’ve already found a shorter path to this node
        if (currentDistance > shortestDistance[currentNode]) continue;

        //Check for PowerUp of desired type
        for (auto* powerUp : currentNode->GetPowerUps()) {
            if (powerUp && powerUp->GetPowerUpType() == mType) {
                targetNode = currentNode;
                break;
            }
        }
        if (targetNode) break;

        //Explore linked nodes
        for (auto* linkedNode : currentNode->GetLinks()) {
            float edgeDistance = DistanceBetweenVertices(currentNode->GetPosition(), linkedNode->GetPosition());
            float newDistance = currentDistance + edgeDistance;

            if (!shortestDistance.count(linkedNode) || newDistance < shortestDistance[linkedNode]) {
                shortestDistance[linkedNode] = newDistance;
                previousNode[linkedNode] = currentNode;
                nodeQueue.push({newDistance, linkedNode});
            }
        }
    }

    //No matching PowerUp found
    if (!targetNode)
        return false; 

    //Reconstruct shortest path from start node to target node
    std::vector<PathNode*> pathToTarget;
    for (PathNode* n = targetNode; n; n = previousNode.count(n) ? previousNode[n] : nullptr)
        pathToTarget.push_back(n);

    std::reverse(pathToTarget.begin(), pathToTarget.end());

    path.insert(path.end(), pathToTarget.begin(), pathToTarget.end());
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
    sPathNodes.clear();  //Not mandatory, but generally good practices for when context ends

    for (PowerUp* powerUp : sPowerUps) {
        delete powerUp;  //FIX: Avoids memory leaks
    }
    sPowerUps.clear();  //Not mandatory, but generally good practices for when context ends

    return(0);
}
#ifndef VERTEX_H
#define VERTEX_H

struct Vertex
{
    Vertex()
    {
        // ERROR 1: Default constructor doesn't initialize members. If `x`, `y`, `z` are used without being set, they may contain garbage values.
    }

    Vertex(float iX, float iY, float iZ) :
        x(iX),
        y(iY),
        z(iZ)
    {
    }

    float x, y, z;
};

#endif // VERTEX_H

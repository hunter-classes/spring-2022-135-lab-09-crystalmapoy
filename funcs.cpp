#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

double length(Coord3D *p)
{
    double len = sqrt(pow((p -> x), 2) + pow((p -> y), 2) + pow((p -> z), 2));
    return len;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    double point1 = length(p1);
    double point2 = length(p2);

    if (point1 > point2)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    ppos -> x = ppos -> x + pvel -> x * dt;
    ppos -> y = ppos -> y + pvel -> y * dt;
    ppos -> z = ppos -> z + pvel -> z * dt;
}

Coord3D* createCoord3D(double x, double y, double z)
{
    Coord3D *points = new Coord3D;
    *points = {x, y, z};

    return points;
}

void deleteCoord3D(Coord3D *p)
{
    delete p;
}
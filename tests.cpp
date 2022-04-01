#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

TEST_CASE("TESTS FOR TASK A")
{
    Coord3D pointP1 = {10, 20, 30};
    CHECK(((length(&pointP1) - 37.4166) < 0.01));
    Coord3D pointQ1 = {15, 20, 25};
    CHECK(((length(&pointP1) - 45.5522) < 0.01));
}

TEST_CASE("TESTS FOR TASK B")
{
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);

    Coord3D pointP2 = {15, 25, 35};
    Coord3D pointQ2 = {25, 33, 54};
    CHECK(fartherFromOrigin(&pointP2, &pointQ2) == &pointQ2);
}

TEST_CASE("TESTS FOR TASK C")
{
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0);
    CHECK(pos.x == 2);
    CHECK(pos.y == -10);
    CHECK(pos.z == 100.4);

    Coord3D pos1 = {3, -5, 152};
    Coord3D vel1 = {-1, 2, 0.74};
    move(&pos1, &vel1, 5.0);
    CHECK(pos1.x == -2);
    CHECK(pos1.y == 5);
    CHECK(pos1.z == 155.7);
}

TEST_CASE("TESTS FOR TASK E")
{
    Coord3D *ppos = createCoord3D(10, 20, 30); 
    CHECK(ppos -> x == 10);
    CHECK(ppos -> y == 20);
    CHECK(ppos -> z == 30);
    Coord3D *pvel = createCoord3D(5.5, -1.4, 7.7); 
    CHECK(pvel -> x == 5.5);
    CHECK(pvel -> y == -1.4);
    CHECK(pvel -> z == 7.7);
}
 
#pragma once
#include <cmath>
#include <iostream>
struct Coord
{
    float x;
    float y;

    Coord():x(0),y(0)
    {
        std::cout << "> " << "(0, 0)" << std::endl;
    }

    Coord(float _x, float _y) : x(_x), y(_y)
    {
        std::cout << "> " << "(" << x << ", " << y << ")" << std::endl;
    }

    Coord abs()
    {
        return Coord(std::abs(x), std::abs(y));
    }

};

Coord inline operator-(Coord left, Coord right)
{
    return Coord(left.x - right.x, left.y - right.y);
}
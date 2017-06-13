#pragma once
#include "coord.hpp"
#include <iostream>

class Circle
{
public:
    void draw() const { std::cout << "draw circle" << std::endl; }
    Coord center_of_gravity() const 
    {
        std::cout << "circle's center of gravity" << std::endl;
        return Coord(3.1415, 3.1415);
    }
};

class Line
{
public:
    void draw() const { std::cout << "draw line" << std::endl; }
    Coord center_of_gravity() const
    {
        std::cout << "line's center of gravity" << std::endl;
        return Coord(.5, .5);
    }
};

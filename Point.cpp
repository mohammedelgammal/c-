#include "Point.hpp"
#include <iostream>

using namespace std;

Point::Point(int x, int y) : x{x}, y{y}
{
}

bool Point::operator==(const Point &other) const
{
    return this->x == other.x && this->y == other.y;
}
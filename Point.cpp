#include "Point.hpp"
#include <iostream>
#include <compare>

using namespace std;

Point::Point(const int x, const int y) : x{x}, y{y}
{
}
Point::Point() : x{0}, y{0}
{
}

int Point::getX() const
{
    return this->x;
}

int Point::getY() const
{
    return this->y;
}

void Point::setX(const int x)
{
    this->x = x;
}

void Point::setY(const int y)
{
    this->y = y;
}

bool Point::operator==(const Point &other) const
{
    const bool isBothEqual = (this->x == other.x) && (this->y == other.y);
    if (isBothEqual)
        return true;
    else
    {
        const int sumThis = this->x + this->y,
                  sumOther = other.x + other.y;
        return sumThis == sumOther;
    }
}

strong_ordering Point::operator<=>(const Point &other) const
{
    const strong_ordering resultX = this->x <=> other.x,
                          resultY = this->y <=> other.y;
    if (resultX == resultY)
        return resultX;
    else
    {
        const int sumThis = this->x + this->y,
                  sumOther = other.x + other.y;
        return sumThis <=> sumOther;
    }
}

ostream &operator<<(ostream &stream, const Point &point)
{
    stream << point.getX() << ", " << point.getY();
    return stream;
}

istream &operator>>(istream &stream, Point &point)
{
    int xValue = 0,
        yValue = 0;

    stream >> xValue >> yValue;

    point.setX(xValue);
    point.setY(yValue);

    return stream;
}
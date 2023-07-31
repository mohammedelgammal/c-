#include "Point.hpp"
#include <iostream>
#include <compare>

using namespace std;

Point::Point() : x{0}, y{0}
{
}
Point::Point(const int x, const int y) : x{x}, y{y}
{
}

Point sumTwoPoints(Point point_one, Point point_two)
{
    const int xPointsSum = point_one.x + point_two.x,
              yPointSum = point_one.y + point_two.y;
    return {xPointsSum, yPointSum};
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

Point Point::operator+(const Point &other) const
{
    const Point pointsSum = sumTwoPoints(*this, other);
    return pointsSum;
}
Point &Point::operator+=(const Point &other)
{
    *this = sumTwoPoints(*this, other);
    return *this;
}
bool Point::operator==(const Point &other) const
{
    const bool isBothEqual = (this->x == other.x) && (this->y == other.y);
    if (isBothEqual)
        return true;
    else
    {
        const Point pointsSum = sumTwoPoints(*this, other);
        return pointsSum.x == pointsSum.y;
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
        const Point pointsSum = sumTwoPoints(*this, other);
        return pointsSum.x <=> pointsSum.y;
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

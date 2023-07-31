#ifndef POINT_HPP
#define POINT_HPP

#include <compare>
#include <iostream>
using namespace std;

class Point
{
public:
    Point(const int x, const int y);
    Point();
    int getX() const;
    int getY() const;
    void setX(const int x);
    void setY(const int y);
    bool operator==(const Point &other) const;
    strong_ordering operator<=>(const Point &other) const;

private:
    int x = 0,
        y = 0;
};

ostream &operator<<(ostream &stream, const Point &point);
istream &operator>>(istream &stream, Point &point);

#endif
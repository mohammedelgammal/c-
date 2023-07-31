#ifndef POINT_HPP
#define POINT_HPP

#include <compare>
using namespace std;

class Point
{
public:
    Point(const int x, const int y);
    int getX() const;
    int getY() const;
    bool operator==(const Point &other) const;
    strong_ordering operator<=>(const Point &other) const;

private:
    int x = 0,
        y = 0;
};

#endif
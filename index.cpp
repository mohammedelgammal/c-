#include <iostream>

using namespace std;

struct Point
{
    short x = 0, y = 0;
};

bool operator==(const Point &firstPoint, const Point &secondPoint)
{
    return (firstPoint.x == secondPoint.x && firstPoint.y == secondPoint.y);
}

ostream &operator<<(ostream &stream, const Point &point)
{
    stream << point.x;
    return stream;
}

int main()
{
    Point point;
    point.x = 20;
    point.y = 30;

    cout << point;
    return 0;
}
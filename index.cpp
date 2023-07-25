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
    return stream << "(" << point.x << ", " << point.y << ")" << endl;
}

Point getPoint()
{
    return {10, 20};
}

void showPoint(Point &point)
{
    cout << point.x << ", " << point.y << endl;
}

int main()
{
    Point point = getPoint();
    showPoint(point);
    return 0;
}
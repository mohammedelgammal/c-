#ifndef POINT_HPP
#define POINT_HPP

class Point
{
public:
    Point(int x, int y);
    bool operator==(const Point &other) const;

private:
    int x = 0,
        y = 0;
};

#endif // POINT_HPP
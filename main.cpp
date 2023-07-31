#include "Point.hpp"
#include <iostream>

using namespace std;

int main()
{
    Point point_one{};

    cout << "Enter the point (e.g. x y):" << endl;
    cin >> point_one;
    cout << "Points are: ("
         << point_one.getX() << ", "
         << point_one.getY() << ")" << endl;

    return 0;
}
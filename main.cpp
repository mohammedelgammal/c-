#include "Point.hpp"
#include <iostream>

using namespace std;

int main()
{
    Point point_one{10, 20},
        point_two{20, 30},
        point_three{30, 10},
        point_four{10, 20};

    point_one += point_four;
    cout << point_one << endl;

    return 0;
}
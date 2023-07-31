#include "Point.hpp"
#include <iostream>

using namespace std;

int main()
{
    Point point_one{10, 20},
        point_two{20, 30},
        point_three{30, 10},
        point_four{10, 20};

    const Point firstTwoPoints = sumTwoPoints(point_one, point_two),
                secondTwoPoints = sumTwoPoints(point_three, point_four);

    cout << boolalpha << (firstTwoPoints < secondTwoPoints) << endl;

    return 0;
}
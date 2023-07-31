#include "Point.hpp"
#include <iostream>

using namespace std;

int main()
{
    const Point point_one{10, 20}, point_two{20, 10};

    cout << boolalpha << (point_one == point_two) << endl;

    return 0;
}
#include <iostream>
#include "Rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect;
    rect.setWidth(10);
    rect.setHeight(20);
    cout << "Dimensions are: "
         << rect.getWidth()
         << ", " 
         << rect.getHeight() << endl
         << "Rectangle area is: "
         << rect.getArea() << endl;
    return 0;
}
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rect(3, 4);
    cout << "Area: " << rect.area() << endl;
    return 0;
}
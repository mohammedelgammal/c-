#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

int Rectangle::area()
{
    return width * height;
}


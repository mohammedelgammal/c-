#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int Rectangle::getArea()
{
    return this->width * this->height;
}

// Getters
int Rectangle::getWidth()
{
    return this->width;
}
int Rectangle::getHeight()
{
    return this->height;
}

// Setters
void Rectangle::setWidth(int width)
{
    if (width < 0)
        throw invalid_argument("width");
    this->width = width;
}

void Rectangle::setHeight(int height)
{
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}
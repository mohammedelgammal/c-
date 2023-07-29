#include "Rectangle.hpp"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int width, int height)
{
    this->setWidth(width);
    this->setHeight(height);
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
void Rectangle::setWidth(const int width)
{
    if (width < 0)
        throw invalid_argument("width");
    this->width = width;
}
void Rectangle::setHeight(const int height)
{
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}

int Rectangle::getArea()
{
    return this->width * this->height;
}

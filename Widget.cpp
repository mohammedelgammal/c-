#include "Widget.hpp"
#include <iostream>

using namespace std;

Widget::Widget(int size, int position) : size{size}, position{position}
{
}

int Widget::getSize() const
{
    return this->size;
}

void Widget::setSize(int size)
{
    this->size = size;
}

void Widget::disable()
{
    this->isDisabled = true;
}

void Widget::enable()
{
    this->isDisabled = false;
}

bool Widget::isEnabled() const
{
    return !this->isDisabled;
}

void Widget::draw() const
{
    cout << "Drawing a widget!" << endl;
}
#include "TextBox.hpp"
#include <iostream>
#include <string>

using namespace std;

TextBox::TextBox(const int &value)
{
    cout << "Value constructor" << endl;
    setValue(value);
}

TextBox::TextBox(const int &value, const string &color) : TextBox{value}
{
    cout << "Color constructor" << endl;
    this->color = color;
    instances_count++;
}

TextBox::TextBox(const TextBox &source) : TextBox(value, color)
{
    cout << "copied!!" << endl;
}

TextBox::~TextBox()
{
    cout << "Object destructed!" << endl;
}

int TextBox::instances_count = 0;

int TextBox::get_instances_count()
{
    return instances_count;
}

int TextBox::getValue()
{
    return this->value;
}

void TextBox::setValue(const int &value)
{
    if (value < 0)
        throw invalid_argument("value");
    this->value = value;
}

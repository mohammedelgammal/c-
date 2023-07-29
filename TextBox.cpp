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
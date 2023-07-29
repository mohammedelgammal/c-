#include "TextBox.hpp"
#include <iostream>

using namespace std;

TextBox::TextBox(int value)
{
    setValue(value);
}

int TextBox::getValue()
{
    return this->value;
}

void TextBox::setValue(int value)
{
    if (value < 0)
        throw invalid_argument("value");
    this->value = value;
}
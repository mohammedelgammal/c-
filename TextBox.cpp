#include "TextBox.hpp"
#include <iostream>
#include <string>

using namespace std;

TextBox::TextBox(const string &value) : value{value}
{
}

string TextBox::getValue() const
{
    return this->value;
}

void TextBox::setValue(const string &value)
{
    this->value = value;
}
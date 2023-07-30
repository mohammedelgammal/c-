#include "Length.hpp"
#include <iostream>

using namespace std;

Length::Length(const int value)
{
    if (value < 0)
        throw invalid_argument("value");
    this->value = value;
};

bool Length::operator==(const Length &other) const
{
    return this->value == other.value;
}

bool Length::operator==(int other) const
{
    return this->value == other;
}

bool Length::operator!=(const Length &other) const
{
    return !(this->value == other.value);
}

bool Length::operator!=(int other) const
{
    return !(this->value == other);
}
#include "TrialClass"
#include <iostream>

using namespace std;

// conversion constructor
TrialClass::TrialClass(float value) : value{value * 2}
{
}

int TrialClass::getValue() const
{
    return this->value;
}

TrialClass::operator float()
{
    return this->value * 10;
}
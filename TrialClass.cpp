#include "TrialClass"
#include <iostream>

using namespace std;

TrialClass::TrialClass(int value) : value{value}
{
}

int TrialClass::getValue() const
{
    return this->value;
}

void TrialClass::setValue(int value)
{
    this->value = value;
}

TrialClass TrialClass::operator++(int value)
{
    return TrialClass(this->value++);
}

TrialClass TrialClass::operator++()
{
    return TrialClass(++this->value);
}

TrialClass::operator float()
{
    return this->value + 0.005;
}

TrialClass::TrialClass(float value) : value{static_cast<int>(value) * 2}
{
}

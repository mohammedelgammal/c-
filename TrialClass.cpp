#include "TrialClass"
#include <iostream>

using namespace std;

TrialClass::TrialClass(int value) : value{value}
{
}

TrialClass::TrialClass(const TrialClass &sourceClass)
{
    cout << "source value is:" << sourceClass.getValue() << endl;
    this->setValue(sourceClass.getValue() + 1);
}

int TrialClass::getValue() const
{
    return this->value;
}

void TrialClass::setValue(int value)
{
    this->value = value;
}
#include "Distance"
#include <iostream>

Distance::Distance(const int kiloMeters, const int meters) : meters{meters}, kilometers{kiloMeters}
{
}

Distance::Distance() : meters{0}, kilometers{0}
{
}

// conversion constructor
Distance::Distance(float distance)
{
    const int kiloMeters = static_cast<int>(distance);
    const int meters = (distance - kiloMeters) * 1000;
    this->kilometers = kiloMeters;
    this->meters = meters;
}

int Distance::getMeters() const
{
    return this->meters;
}

int Distance::getKiloMeters() const
{
    return this->kilometers;
}
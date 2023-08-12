#include "Distance"
#include <iostream>

using namespace std;

Distance::Distance(const int kiloMeters, const int meters) : meters{meters}, kilometers{kiloMeters}, convertCount{0}
{
    cout << "Base class constructor" << endl;
}

Distance::Distance() : meters{0}, kilometers{0}, convertCount{0}
{
}

// conversion constructor
Distance::Distance(float distance)
{
    const int kiloMeters = static_cast<int>(distance);
    const int meters = (distance - kiloMeters) * 1000;
    this->kilometers = kiloMeters;
    this->meters = meters;
    this->convertCount++;
}

// conversion operator
Distance::operator float()
{
    int combinedDistance = this->kilometers * 1000 + this->meters;
    float distance = (static_cast<float>(combinedDistance)) / 1000;
    return distance;
}

int Distance::getMeters() const
{
    return this->meters;
}

int Distance::getKiloMeters() const
{
    return this->kilometers;
}

int Distance::getCount() const
{
    return this->convertCount;
}

Distance Distance::operator++()
{
    ++this->kilometers;
    ++this->meters;
    return *this;
}

// void Distance::increaseCount()
// {
//     ++this->meters;
//     ++this->kilometers;
// }

// DistanceChild DistanceChild::operator++()
// {
//     this->increaseCount();
//     return *this;
// }
#include <iostream>
#include "Distance"

using namespace std;

int main()
{
    Distance distanceOne(2, 238);

    cout << "KiloMeters: " << distanceOne.getKiloMeters() << endl;
    cout << "Meters: " << distanceOne.getMeters() << endl;

    float distance = static_cast<float>(distanceOne);

    cout << "Float distance: " << distance << endl;

    return 0;
}
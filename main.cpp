#include <iostream>
#include "Distance"

using namespace std;

int main()
{
    Distance distanceOne(2, 238);

    cout << "KiloMeters: " << distanceOne.getKiloMeters() << endl;
    cout << "Meters: " << distanceOne.getMeters() << endl;

    distanceOne = 15.625;

    cout << "Float distance: " << distanceOne.getKiloMeters() << endl;
    cout << "Float distance: " << distanceOne.getMeters() << endl;

    return 0;
}
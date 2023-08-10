#include <iostream>
#include "Distance"

using namespace std;

int main()
{
    Distance distanceOne(2.536);

    cout << "KiloMeters: " << distanceOne.getKiloMeters() << endl;
    cout << "Meters: " << distanceOne.getMeters() << endl;

    return 0;
}
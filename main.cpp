#include <iostream>
#include "Distance"

using namespace std;

int main()
{

    // Distance distanceOne{2, 765};
    DistanceChild distanceTwo{2, 462};

    cout << "KiloMeters: " << distanceTwo.getKiloMeters() << endl;
    cout << "Meters: " << distanceTwo.getMeters() << endl;

    ++distanceTwo;

    // distanceTwo = 15.625; // preventes by explicit

    cout << "Incremented distance: " << distanceTwo.getKiloMeters() << endl;
    cout << "Incremented distance: " << distanceTwo.getMeters() << endl;

    cout << "Conversion count: " << distanceTwo.getCount() << endl;

    return 0;
}
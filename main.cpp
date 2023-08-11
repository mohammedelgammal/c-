#include <iostream>
#include "Distance"

using namespace std;
void callDistance(Distance &distance)
{
    cout << "Function km: " << distance.getKiloMeters() << endl;
    cout << "Function meters: " << distance.getMeters() << endl;
}

int main()
{

    Distance distanceOne(2, 238);

    // cout << "KiloMeters: " << distanceOne.getKiloMeters() << endl;
    // cout << "Meters: " << distanceOne.getMeters() << endl;

    // // distanceOne = 15.625;

    // cout << "Float distance: " << distanceOne.getKiloMeters() << endl;
    // cout << "Float distance: " << distanceOne.getMeters() << endl;

    callDistance(2, 321);

    return 0;
}
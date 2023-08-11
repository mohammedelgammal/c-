#include <iostream>
#include "Distance"

using namespace std;

int main()
{

    const Distance distanceOne(2.765);

    cout << "KiloMeters: " << distanceOne.getKiloMeters() << endl;
    cout << "Meters: " << distanceOne.getMeters() << endl;

    // distanceOne = 15.625; // preventes by explicit

    // cout << "Float distance: " << distanceOne.getKiloMeters() << endl;
    // cout << "Float distance: " << distanceOne.getMeters() << endl;

    cout << "Conversion count: " << distanceOne.getCount() << endl;

    return 0;
}
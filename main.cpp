#include <iostream>

using namespace std;

float getCubicFeet(const float gallons)
{
    const float cubicFeet = gallons / 7.481;
    return cubicFeet;
}

int main()
{
    float gallons = 0;

    while (true)
    {
        cout << "Write amount in gallons: " << endl;
        cin >> gallons;
        if (!cin.fail())
            break;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Cubic feet in " << gallons << " Gallons are: "
         << getCubicFeet(gallons) << "cubic feet" << endl;

    return 0;
}
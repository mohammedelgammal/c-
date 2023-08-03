#include <iostream>
#include <iomanip>

using namespace std;

float toFahrenheit(int degree)
{
    return (degree * 9 / 5) + 32;
}

int main()
{
    float degree;

    while (true)
    {
        cout << "Please enter Temprature in Celsius!" << endl;
        cin >> degree;
        if (!cin.fail())
        {
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please try again..." << endl;
    }

    cout << degree << " Celsius is: "
         << toFahrenheit(degree) << " Fahrenheit!" << endl;

    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float amount;

    while (true)
    {
        cout << "Please enter an amount in US Dollars!" << endl;
        cin >> amount;
        if (!cin.fail())
        {
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please try again..." << endl;
    }

    cout << left << setw(10) << "GBP: " << right << setw(10) << amount / 1.487 << endl
         << left << setw(10) << "Frank: " << right << setw(10) << amount / 0.172 << endl
         << left << setw(10) << "Mark: " << right << setw(10) << amount / 0.584 << endl
         << left << setw(10) << "Yen: " << right << setw(10) << amount / 0.00955 << endl;

    return 0;
}
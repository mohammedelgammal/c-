#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

float getDecimalInput()
{
    float decimal = 0;
    while (true)
    {
        cout << "Enter decimal amount: " << endl;
        cin >> decimal;
        if (!cin.fail())
            break;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return decimal;
}

string convertToOld(const float decimal)
{
    string oldMonetaryString;
    int pounds = static_cast<int>(decimal),
        shelling = static_cast<int>((decimal - pounds) * 20),
        pences = static_cast<int>(((decimal - pounds) * 20 - shelling) * 12);

    stringstream ss;

    ss << pounds << '.' << shelling << '.' << pences;
    oldMonetaryString = ss.str();

    return oldMonetaryString;
}

int main()
{
    // get the decimal new amount
    // convert to the old format
    // cout old format 1.23.4

    float decimalNumber = getDecimalInput();
    string oldMonetary = convertToOld(decimalNumber);

    cout << "Old Monetary: " << oldMonetary << endl;

    return 0;
}
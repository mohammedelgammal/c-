#include <iostream>
#include <iomanip>

using namespace std;

struct OldMonetary
{
    int pound, shelling, pence;
};

enum MonetaryEnum
{
    POUND,
    SHELLING,
    PENCE
};

void getInput(unique_ptr<OldMonetary> &oldMonetary, MonetaryEnum monetaryEnum)
{
    while (true)
    {
        switch (monetaryEnum)
        {
        case MonetaryEnum::POUND:
            cout << "Enter amount in pounds: " << endl;
            cin >> oldMonetary->pound;
            break;
        case MonetaryEnum::SHELLING:
            cout << "Enter amount in shellings: " << endl;
            cin >> oldMonetary->shelling;
            break;
        case MonetaryEnum::PENCE:
            cout << "Enter amount in pences: " << endl;
            cin >> oldMonetary->pence;
            break;
        default:
            break;
        }
        if (!cin.fail())
            break;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

unique_ptr<OldMonetary>
getOldMonetary()
{
    unique_ptr<OldMonetary> oldMonetary = make_unique<OldMonetary>();
    getInput(oldMonetary, MonetaryEnum::POUND);
    getInput(oldMonetary, MonetaryEnum::SHELLING);
    getInput(oldMonetary, MonetaryEnum::PENCE);

    return oldMonetary;
}

float convertToDecimal(unique_ptr<OldMonetary> &oldMonetary)
{
    const float decimal = oldMonetary->pound +
                          static_cast<float>(oldMonetary->shelling) / 20 +
                          static_cast<float>(oldMonetary->pence) / 12 / 20;
    return decimal;
}

int main()
{
    // get user input in old format
    // convert to decimal new format
    // cout decimal format

    unique_ptr<OldMonetary> oldMonetary = getOldMonetary();
    const float decimalMonetary = convertToDecimal(oldMonetary);

    cout << "Decimal equivalent: " << char(156) << setprecision(3) << decimalMonetary << endl;

    return 0;
}
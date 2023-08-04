#include <iostream>

using namespace std;

struct OldMonetary
{
    float pounds, shellings, pences;
};

enum class Monetary
{
    POUNDS,
    SHELLINGS,
    PENCES
};

void getInput(unique_ptr<OldMonetary> &oldMonetary, Monetary monetary)
{
    while (true)
    {
        switch (monetary)
        {
        case Monetary::POUNDS:
            cout << "Enter pounds: " << endl;
            cin >> oldMonetary->pounds;
            break;
        case Monetary::SHELLINGS:
            cout << "Enter shellings: " << endl;
            cin >> oldMonetary->shellings;
            break;
        case Monetary::PENCES:
            cout << "Enter pences: " << endl;
            cin >> oldMonetary->pences;
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

unique_ptr<OldMonetary> getOldMonetary()
{
    unique_ptr<OldMonetary> oldMonetary = make_unique<OldMonetary>();

    getInput(oldMonetary, Monetary::POUNDS);
    getInput(oldMonetary, Monetary::SHELLINGS);
    getInput(oldMonetary, Monetary::PENCES);

    return oldMonetary;
}

double convertMonetary(const unique_ptr<OldMonetary> &monetary)
{
    const double poundsDecimal = monetary->pounds + (monetary->pences / 12 / 20) + (monetary->shellings / 20);

    return poundsDecimal;
}

int main()
{
    const unique_ptr<OldMonetary> oldMonetary = getOldMonetary();
    const double newMonetary = convertMonetary(oldMonetary);

    cout << newMonetary << endl;

    return 0;
}
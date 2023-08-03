#include <iostream>
#include <ctype.h>

using namespace std;

bool isLower(const char chr)
{
    return islower(static_cast<int>(chr));
}

int main()
{
    char chr;

    while (true)
    {
        cout << "Please enter a character to check if lower or not!" << endl;
        cin >> chr;
        if (!cin.fail())
        {
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please try again..." << endl;
    }

    cout << boolalpha << "Character (" << chr << ")"
         << " is: "
         << (isLower(chr) ? "Lowercase" : "Uppercase") << endl;

    return 0;
}
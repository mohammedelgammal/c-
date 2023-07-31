#include "TextBox.hpp"
#include <iostream>

using namespace std;

int main()
{
    TextBox box_one{"one"};

    box_one.disable();

    cout << boolalpha << box_one.isEnabled() << endl;

    return 0;
}
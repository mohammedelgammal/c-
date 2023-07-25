#include <iostream>

using namespace std;

enum List
{
    All = 0,
    Some,
    None
};

int main()
{
    unsigned short input = 0;
    cout << "Please enter the number: " << endl;
    cin >> input;

    switch (input)
    {
    case List::All:
        cout << "Here is all!";
        break;
    case List::Some:
        cout << "Here is some!";
        break;
    case List::None:
        cout << "Here is none!";
        break;
    default:
        cout << "Unknown input!";
        break;
    }
    return 0;
}
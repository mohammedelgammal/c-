// Libraries
#include <iostream>
#include <stack>

using namespace std;

bool areRotations(string &first, string &second)
{
    if (!first.length() || !second.length())
        return false;

    return (first.length() == second.length()) &&
           (first.append(first).find(second) != string::npos);
}

int main()
{
    string input = "ABCD", rotation = "BCADa";

    cout << boolalpha << areRotations(input, rotation);

    return 0;
}
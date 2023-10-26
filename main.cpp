// Libraries
#include <iostream>
#include <sstream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    string paranthese = "{}}";

    cout << boolalpha << solution.isValid(paranthese);

    return 0;
}
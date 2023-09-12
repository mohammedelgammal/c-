// Libraries
#include <iostream>

// Data Structures
#include "Stack"
#include "Stack.cpp"

#include "Balance.hpp"

using namespace std;

int main()
{

    // string *str = new string("{{()}}");
    string *str = new string("{()}}");
    // string *str = new string("{()");
    // string *str = new string("()");
    // string *str = new string("<[{(1,2,3)}]>");
    // string *str = new string("(3]");
    Balance balancer;

    cout << boolalpha << balancer.isBalanced(str) << endl;

    delete str;
    str = nullptr;

    return 0;
}
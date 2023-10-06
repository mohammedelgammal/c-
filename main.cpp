// Libraries
#include <iostream>

#include "Tries"
// #include "Tries.cpp"

using namespace std;

int main()
{
    Tries tries;

    tries.insert("cat");

    cout << boolalpha << tries.contains("cat");

    tries.remove("cat");

    cout << boolalpha << tries.contains("cat");

    return 0;
}
// Libraries
#include <iostream>

#include "Tries"
// #include "Tries.cpp"

using namespace std;

int main()
{
    Tries tries;

    tries.insert("car");
    tries.insert("care");

    cout << boolalpha << tries.contains("car");

    tries.remove("care");

    cout << boolalpha << tries.contains("car");

    return 0;
}
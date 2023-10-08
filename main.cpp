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
    tries.insert("cars");
    tries.insert("card");
    tries.insert("careful");
    tries.insert("carefless");

    tries.autoComplete("cargo");

    return 0;
}
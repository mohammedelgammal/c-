// Libraries
#include <iostream>

#include "Tries"
#include "Tries.cpp"

using namespace std;

int main()
{
    Tries tries;
    string str = "cat";

    tries.insert(str);

    return 0;
}
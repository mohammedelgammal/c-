#include "Pair.hpp"
#include <iostream>

using namespace std;

int main()
{
    Pair pair_one{10, "great"};

    cout << pair_one.getValue() << endl;

    return 0;
}
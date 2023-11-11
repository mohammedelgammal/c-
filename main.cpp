// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    RandomizedSet set;

    set.insert(1);
    set.insert(2);
    set.remove(1);

    cout << set.getRandom();

    return 0;
}
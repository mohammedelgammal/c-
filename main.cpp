#include <iostream>
#include "TrialClass"

using namespace std;

int main()
{
    TrialClass classOne{10}, classTwo{classOne};

    // classOne.setValue(20);

    cout << classTwo.getValue() << endl;

    return 0;
}
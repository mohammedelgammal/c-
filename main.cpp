#include <iostream>
#include "TrialClass"

using namespace std;

int main()
{
    TrialClass classOne{10};

    classOne.setValue(20);

    cout << classOne.getValue() << endl;

    return 0;
}
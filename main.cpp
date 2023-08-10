#include <iostream>
#include "TrialClass"

using namespace std;

int main()
{
    TrialClass trialOne{25.25};

    cout << trialOne.getValue() << endl;

    return 0;
}
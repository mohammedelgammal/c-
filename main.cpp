#include <iostream>
#include "TrialClass"

using namespace std;

int main()
{
    TrialClass trialOne{20};

    cout << trialOne.getValue() << endl;

    ++trialOne;

    cout << trialOne.getValue() << endl;

    return 0;
}
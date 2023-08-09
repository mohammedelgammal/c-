#include <iostream>
#include "TrialClass"

using namespace std;

int main()
{
    TrialClass trialOne{20};

    ++trialOne;

    cout << trialOne.getValue() << endl;

    return 0;
}
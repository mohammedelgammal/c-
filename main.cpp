#include <iostream>
#include "TrialClass"

using namespace std;

int main()
{
    TrialClass trialOne{25.25}, trialTwo;

    trialTwo = static_cast<float>(trialOne);

    cout << trialOne.getValue() << endl;
    cout << trialTwo.getValue() << endl;

    return 0;
}
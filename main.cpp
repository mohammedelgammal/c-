#include <iostream>
#include "TrialClass"

using namespace std;

int main()
{
    TrialClass trialOne{20};

    float floatTrial = static_cast<float>(trialOne);

    cout << trialOne << endl;

    return 0;
}
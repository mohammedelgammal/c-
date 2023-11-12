// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> gas{1, 2, 3, 4, 5}, cost{3, 4, 5, 1, 2};

    cout << solution.canCompleteCircuit(gas, cost);

    return 0;
}
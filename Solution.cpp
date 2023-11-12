#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int size = gas.size(),
        currentGas = 0,
        totalGas = 0,
        start = 0;

    for(int i = 0; i < size; i++)
    {
        int netGas = gas[i] - cost[i];
        currentGas += netGas;
        totalGas += netGas;

        if(currentGas < 0)
        {
            currentGas = 0;
            start = i + 1;
        }
    }

    return totalGas >= 0 ? start : -1;
}
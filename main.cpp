// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> cost = {10, 15, 20};

    cout << solution.minCostClimbingStairs(cost);

    return 0;
}
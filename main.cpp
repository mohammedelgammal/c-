// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> cost = {2, 7, 9, 3, 1};

    cout << solution.rob(cost);

    return 0;
}
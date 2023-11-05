// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> prices = {1, 2, 3, 4, 5};

    cout << solution.maxProfit(prices);

    return 0;
}
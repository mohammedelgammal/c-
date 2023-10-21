// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << solution.maxProfit(prices);

    return 0;
}
// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> citations = {3, 0, 1, 1, 4};

    cout << boolalpha << solution.hIndex(citations);

    return 0;
}
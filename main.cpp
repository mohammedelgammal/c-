// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> input = {4, 1, 2, 2, 1};

    cout << solution.singleNumber(input);

    return 0;
}
// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> unsorted{2, 2, 1};

    cout << solution.majorityElement(unsorted);

    return 0;
}
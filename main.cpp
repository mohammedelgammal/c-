// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> duplicate = {1, 1, 1, 2, 2, 3, 4};

    cout << solution.removeDuplicates(duplicate);

    return 0;
}
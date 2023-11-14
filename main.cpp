// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> numbers{2, 7, 11, 15};

    vector<int> ans = solution.twoSum(numbers, 9);

    for (int num : ans)
        cout << num;

    return 0;
}
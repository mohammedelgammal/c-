// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> ans = solution.summaryRanges(nums);

    cout << '[';
    for(string a : ans)
        cout << a << ',';
    cout << ']';

    return 0;
}
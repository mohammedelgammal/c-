// Libraries
#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<vector<int>> matrix = {{1,2,3,4}};

    vector<int> ans = solution.spiralOrder(matrix);

    for (int num : ans)
        cout << num;

    return 0;
}
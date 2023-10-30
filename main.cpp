// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    TreeNode left{1},
        right{3, &left, nullptr},
        root{2, &right, &left};

    vector<double> avgs = solution.averageOfLevels(&root);

    for (int i = 0; i < avgs.size(); i++)
        cout << avgs[i] << ", ";

    return 0;
}
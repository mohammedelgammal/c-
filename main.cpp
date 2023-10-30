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

    cout << solution.minDiffInBST(&root);

    return 0;
}
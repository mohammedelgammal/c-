// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    TreeNode left{1}, right{3}, root{2, &left, &right};

    solution.invertTree(&root);

    return 0;
}
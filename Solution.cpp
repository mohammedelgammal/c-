#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>

#include "Solution"

using namespace std;

vector<double> Solution::averageOfLevels(TreeNode *root)
{
    vector<double> avgs;
    queue<TreeNode *> queue;

    queue.push(root);

    while (!queue.empty())
    {
        int levelCount = queue.size();
        double sum = 0;

        for (int i = 0; i < levelCount; i++)
        {
            TreeNode *front = queue.front();
            sum += front->val;

            if (front->left)
                queue.push(front->left);
            if (front->right)
                queue.push(front->right);

            queue.pop();
        }

        double avg = sum / levelCount;
        avgs.push_back(avg);
    }

    return avgs;
}

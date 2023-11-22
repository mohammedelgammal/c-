// Libraries
#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    ListNode *second = new ListNode(2),
             *first = new ListNode(1, second),
             *head = new ListNode(0, first);

    vector<vector<int>> ans = solution.spiralMatrixIV(1, 4, head);

    cout << '[';

    for (vector<int> vec : ans)
    {
        cout << '[';
        for (int num : vec)
            cout << num << ',';
        cout << ']';
    }

    cout << ']';

    delete head;
    head = nullptr;

    return 0;
}
// Libraries
#include <iostream>
#include <sstream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    ListNode *newHead = new ListNode{3};
    newHead->next->val = 2;
    newHead->next->val = 0;
    newHead->next->val = -4;
    newHead->next->val = 2;

    cout << boolalpha << solution.hasCycle(newHead);

    return 0;
}
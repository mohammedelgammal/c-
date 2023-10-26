#include <iostream>
#include <stack>
#include <set>

#include "Solution"

using namespace std;

bool Solution::hasCycle(ListNode *head)
{
    set<ListNode *> set;
    ListNode *current = head;

    while (current != nullptr)
    {
        if (set.contains(current))
            return true;

        set.insert(current);
        current = current->next;
    }

    return false;
}
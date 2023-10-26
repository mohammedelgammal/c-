#include <iostream>
#include <stack>
#include <set>

#include "Solution"

using namespace std;

bool Solution::hasCycle(ListNode *head)
{
    ListNode *tortoise = head, *hare = head;

    while (hare != nullptr && hare->next)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (hare == tortoise)
            return true;
    }

    return false;
}
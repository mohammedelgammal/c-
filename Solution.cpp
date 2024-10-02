#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::hasCycle(ListNode *head)
{
    ListNode *slow = head, *fast = head ? head->next : nullptr;
    while(fast && fast->next) {
        if(slow == fast) return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}
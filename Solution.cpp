#include <iostream>
#include <algorithm>

#include "Solution"

ListNode *Solution::reverseList(ListNode *head)
{
    ListNode *prev = nullptr,
             *curr = head,
             *next = nullptr;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
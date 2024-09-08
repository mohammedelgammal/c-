#include <iostream>
#include <algorithm>

#include "Solution"

void Solution::reorderList(ListNode *head)
{
    ListNode *slow = head, *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *prev = nullptr, *curr = slow->next, *next = nullptr;
    slow->next = nullptr;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    ListNode *first = head, *second = prev, *next1 = nullptr, *next2 = nullptr;
    while(second) {
        next1 = first->next;
        next2 = second->next;
        first->next = second;
        second->next = next1;
        first = next1, second = next2;
    }
}
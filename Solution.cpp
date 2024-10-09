#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::isPalindrome(ListNode *head)
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
    ListNode *newHead = prev;
    while (newHead)
    {
        if (newHead->val != head->val)
            return false;
        newHead = newHead->next;
        head = head->next;
    }
    return true;
}
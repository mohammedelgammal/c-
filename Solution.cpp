#include <iostream>
#include <algorithm>

#include "Solution"

ListNode *Solution::reverseList(ListNode *head)
{
    ListNode* newHead;
    if(!head) return nullptr;
    if(head->next) {
        newHead = reverseList(head->next);
        head->next->next = head;
    } else {
        newHead = head;
    }
    head->next = nullptr;
    return newHead;
}
#include <iostream>
#include <algorithm>

#include "Solution"

ListNode *Solution::removeElements(ListNode *head, int val)
{
    ListNode *dummyHead = new ListNode(0, head), *prev = dummyHead, *curr = head;
    while(curr) {
        if(curr->val == val) prev->next = curr->next;
        else prev = curr;
        curr = curr->next;
    }
    return dummyHead->next;
}
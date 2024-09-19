#include <iostream>
#include <algorithm>

#include "Solution"

ListNode *Solution::removeNthFromEnd(ListNode *head, int n)
{
    ListNode *dummyHead = new ListNode(0, head), *right = head, *left = dummyHead;
    while(n) {
        right = right->next;
        n--;
    }
    while(right) {
        right = right->next;
        left = left->next;
    }
    left->next = left->next->next;
    return dummyHead->next;
}
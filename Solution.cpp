#include <iostream>
#include <algorithm>

#include "Solution"

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *ans = new ListNode(), *dummy = ans;
    int carry = 0;
    while (l1 || l2 || carry)
    {
        int val1 = l1 ? l1->val : 0,
            val2 = l2 ? l2->val : 0,
            val = val1 + val2 + carry;
        carry = val / 10;
        val %= 10;
        dummy->next = new ListNode(val);
        dummy = dummy->next;
        l1 = l1 ? l1->next : nullptr;
        l2 = l2 ? l2->next : nullptr;
    }
    return ans->next;
}
#include <iostream>

#include "Solution"

using namespace std;

ListNode *getMin(ListNode *list1, ListNode *list2)
{
    return list1->val < list2->val ? list1 : list2;
}

void updateLists(ListNode *minNode, ListNode *&list1, ListNode *&list2)
{
    if (minNode == list1)
        list1 = list1->next;
    else
        list2 = list2->next;
}

ListNode *Solution::mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL)
        return list2;

    if (list2 == NULL)
        return list1;

    ListNode *ptr = list1;

    if (list1->val > list2->val)
    {
        ptr = list2;
        list2 = list2->next;
    }
    else
    {
        list1 = list1->next;
    }

    
    ListNode *curr = ptr;

    // till one of the list doesn't reaches NULL
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            curr->next = list1;
            list1 = list1->next;
        }
        else
        {
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next;
    }

    // adding remaining elements of bigger list.
    if (!list1)
        curr->next = list2;
    else
        curr->next = list1;

    return ptr;
}

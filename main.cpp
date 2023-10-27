// Libraries
#include <iostream>
#include <sstream>

#include "Solution"

using namespace std;

void deleteLinkedList(ListNode *head)
{
    while (head)
    {
        ListNode *current = head;
        head = head->next;
        delete current;
    }
}

void traverseLinkedList(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        // Process the current node (e.g., print its value)
        cout << current->val << " ";
        current = current->next; // Move to the next node
    }
    cout << endl;
}

int main()
{
    Solution solution;

    ListNode node1{1};
    ListNode node2{2};
    ListNode node3{4};

    ListNode *list1 = &node1;
    list1->next = &node2;
    list1->next->next = &node3;

    ListNode node4{1};
    ListNode node5{3};
    ListNode node6{4};

    ListNode *list2 = &node4;
    list2->next = &node5;
    list2->next->next = &node6;

    traverseLinkedList(solution.mergeTwoLists(list1, list2));

    return 0;
}
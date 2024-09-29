#include <iostream>
#include <algorithm>

#include "Solution"

Node * Solution::copyRandomList(Node *head)
{
    unordered_map<Node*, Node*> map;
    Node *curr = head;
    while(curr) {
        map[curr] = new Node(curr->val);
        curr = curr->next;
    }
    curr = head;
    while(curr) {
        map[curr]->next = map[curr->next];
        map[curr]->random = map[curr->random];
        curr = curr->next;
    } 
    return map[head];
}
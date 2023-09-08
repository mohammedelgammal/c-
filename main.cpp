#include <iostream>
#include "LinkedList"

using namespace std;

int main()
{
    Node head{1, nullptr};
    Node *head_ptr = &head;

    LinkedList newList{head_ptr};

    return 0;
}
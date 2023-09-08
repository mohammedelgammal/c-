#include "LinkedList"

Node::Node(const int value, Node *next) : value{value}, next{next}
{
}

LinkedList::LinkedList(Node *head) : head{head}
{
}


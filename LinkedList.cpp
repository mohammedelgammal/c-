#include "LinkedList"
#include <iostream>

using namespace std;

Node::Node(const int value, Node *next) : value{value}, next{next}
{
}

LinkedList::LinkedList(int value) : head{new Node(value, nullptr)}
{
}

LinkedList::LinkedList() : head{nullptr}
{
}

LinkedList::~LinkedList()
{
    delete head;
    head = nullptr;
};

void LinkedList::addFirst(const int value)
{
    Node *newHead = new Node(value, nullptr);
    if (head == nullptr)
    {
        head = newHead;
        return;
    }
    newHead->next = head;
    head = newHead;
}
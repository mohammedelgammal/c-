#include "LinkedList"
#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

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

vector<int> LinkedList::toArray()
{
    Node *currentNode = head;
    vector<int> result{};

    while (currentNode != nullptr)
    {
        result.push_back(currentNode->value);
        currentNode = currentNode->next;
    }

    return result;
}
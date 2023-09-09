#include "DoublyLinkedList"
#include <iostream>
#include <vector>
#include <stdexcept>

using std::cout, std::endl, std::vector, std::logic_error;

Node::Node(const int value, Node *next, Node *previous) : value{value}, next{next}, previous{previous}
{
}

DoublyLinkedList::DoublyLinkedList(int value) : head{new Node(value, nullptr, nullptr)}
{
}

DoublyLinkedList::DoublyLinkedList() : head{nullptr}
{
}

DoublyLinkedList::~DoublyLinkedList()
{
    delete head;
    head = nullptr;
};

void DoublyLinkedList::addFirst(const int value)
{
    Node *newHead = new Node(value, nullptr, nullptr);
    Node *currentNode = head;

    if (head == nullptr)
    {
        head = newHead;
        return;
    }
    newHead->previous = head->previous;
    head->previous->next = newHead;
    head->previous = newHead;
    newHead->next = head;
    head = newHead;
}

vector<int> DoublyLinkedList::toArray() const
{
    Node *currentNode = head;
    vector<int> result{};

    while (currentNode)
    {
        result.push_back(currentNode->value);
        if (currentNode->next == head)
            break;
        currentNode = currentNode->next;
    }

    return result;
}

void DoublyLinkedList::addLast(const int value)
{
    Node *newNode = new Node(value, nullptr, nullptr);
    Node *currentNode = head;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    if (head->next == nullptr)
    {
        head->next = newNode;
        newNode->previous = head;
        newNode->next = head;
        head->previous = newNode;
        return;
    }
    head->previous->next = newNode;
    newNode->previous = head->previous;
    newNode->next = head;
    head->previous = newNode;
}

bool DoublyLinkedList::isListEmpty() const
{
    return head == nullptr;
};

void DoublyLinkedList::deleteFirst()
{
    if (isListEmpty())
        throw logic_error("List is empty");

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node *newHead = head->next;
    newHead->previous = head->previous;
    newHead->previous->next = newHead;
    delete head;
    head = newHead;
}

void DoublyLinkedList::deleteLast()
{
    if (isListEmpty())
    {
        throw logic_error("List is empty");
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *currentNode = head;
    Node *beforeLastNode = head->previous->previous;
    if (beforeLastNode == head)
    {
        delete beforeLastNode->next;
        head->next = nullptr;
        head->previous = nullptr;
        return;
    }
    delete beforeLastNode->next;
    beforeLastNode->next = head;
    head->previous = beforeLastNode;
}

bool DoublyLinkedList::contains(int value) const
{
    if (isListEmpty())
        throw logic_error("List is empty");

    bool isFound = false;
    Node *currentNode = head;

    while (currentNode)
    {
        if (currentNode->value == value)
        {
            isFound = true;
            return isFound;
        }
        if (currentNode->next == head)
            break;
        currentNode = currentNode->next;
    }
    return isFound;
}

int DoublyLinkedList::indexOf(int value) const
{
    if (isListEmpty())
        throw logic_error("List is empty");

    int index = 0;
    Node *currentNode = head;

    while (currentNode)
    {
        if (currentNode->value == value)
        {
            return index;
        }
        if (currentNode->next == head)
            break;
        index++;
        currentNode = currentNode->next;
    }

    return -1;
}

#include "LinkedList"
#include <iostream>
#include <vector>
#include <stdexcept>

using std::cout, std::endl, std::vector, std::logic_error;

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

vector<int> LinkedList::toArray() const
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

void LinkedList::addLast(const int value)
{
    Node *newNode = new Node(value, nullptr);
    Node *currentNode = head;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    while (currentNode->next != nullptr)
    {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
}

bool LinkedList::isListEmpty() const
{
    return head == nullptr;
};

void LinkedList::deleteFirst()
{
    if (isListEmpty())
        throw logic_error("List is empty");
    Node *newHead = head->next;
    delete head;
    head = newHead;
}

void LinkedList::deleteLast()
{
    if (isListEmpty())
    {
        throw logic_error("List is empty");
    }
    Node *currentNode = head;

    while (currentNode->next)
    {
        if (currentNode->next->next == nullptr)
        {
            delete currentNode->next;
            currentNode->next = nullptr;
            return;
        }
        currentNode = currentNode->next;
    }
}

bool LinkedList::contains(int value) const
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
        currentNode = currentNode->next;
    }
    return isFound;
}

int LinkedList::indexOf(int value) const
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
        index++;
        currentNode = currentNode->next;
    }

    return -1;
}

void LinkedList::reverse()
{
    if (isListEmpty())
        throw logic_error("List is empty");

    Node *prevNode = nullptr;
    Node *currentNode = head;
    Node *nextNode = nullptr;

    while (currentNode)
    {
        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;
}
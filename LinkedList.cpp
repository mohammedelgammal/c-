#include "LinkedList"
#include <iostream>
#include <vector>
#include <stdexcept>

using std::cout, std::endl, std::vector, std::logic_error, std::out_of_range, std::invalid_argument;

template <typename T>
Node<T>::Node(const T value, Node<T> *next) : value{value}, next{next}
{
}

template <typename T>
LinkedList<T>::LinkedList(T value) : head{new Node<T>(value, nullptr)}
{
}

template <typename T>
LinkedList<T>::LinkedList() : head{nullptr}
{
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    delete head;
    head = nullptr;
};

template <typename T>
void LinkedList<T>::addFirst(const T value)
{
    Node<T> *newHead = new Node<T>(value, nullptr);

    if (head == nullptr)
    {
        head = newHead;
        return;
    }
    newHead->next = head;
    head = newHead;
}

template <typename T>
vector<T> LinkedList<T>::toArray() const
{
    Node<T> *currentNode = head;
    vector<T> result{};

    while (currentNode != nullptr)
    {
        result.push_back(currentNode->value);
        currentNode = currentNode->next;
    }

    return result;
}

template <typename T>
void LinkedList<T>::addLast(const T value)
{
    Node<T> *newNode = new Node<T>(value, nullptr);
    Node<T> *currentNode = head;

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

template <typename T>
bool LinkedList<T>::isListEmpty() const
{
    return head == nullptr;
};

template <typename T>
void LinkedList<T>::deleteFirst()
{
    if (isListEmpty())
        throw logic_error("List is empty");
    Node<T> *newHead = head->next;
    delete head;
    head = newHead;
}

template <typename T>
void LinkedList<T>::deleteLast()
{
    if (isListEmpty())
    {
        throw logic_error("List is empty");
    }
    Node<T> *currentNode = head;

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
    }

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

template <typename T>
bool LinkedList<T>::contains(T value) const
{
    if (isListEmpty())
        throw logic_error("List is empty");

    bool isFound = false;
    Node<T> *currentNode = head;

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

template <typename T>
int LinkedList<T>::indexOf(T value) const
{
    if (isListEmpty())
        throw logic_error("List is empty");

    int index = 0;
    Node<T> *currentNode = head;

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

template <typename T>
void LinkedList<T>::reverse()
{
    if (isListEmpty())
        throw logic_error("List is empty");

    Node<T> *prevNode = nullptr;
    Node<T> *currentNode = head;
    Node<T> *nextNode = nullptr;

    while (currentNode)
    {
        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;
}

template <typename T>
int LinkedList<T>::getKthFromEnd(int kth)
{
    if (isListEmpty())
        throw logic_error("List is empty");

    if (kth <= 0)
        throw logic_error("Only positive numbers are allowed");

    Node<T> *kthNode = head;
    Node<T> *lastNode = head;

    for (int i = 0; i < kth; i++)
    {
        if (lastNode == nullptr)
            throw out_of_range("Kth out of range");

        lastNode = lastNode->next;
    }

    while (lastNode != nullptr)
    {
        kthNode = kthNode->next;
        lastNode = lastNode->next;
    }

    return kthNode->value;
}

template <typename T>
T LinkedList<T>::operator[](const int index) const
{
    if (isListEmpty())
        throw logic_error("List is empty");

    Node<T> *currentNode = head;
    int currentIndex = 0;

    if (index >= 0)
    {
        while (currentNode)
        {
            if (currentIndex == index)
                break;

            currentNode = currentNode->next;
            currentIndex++;
        }
    }
    else
        throw invalid_argument("Invalid index");

    return currentNode->value;
}
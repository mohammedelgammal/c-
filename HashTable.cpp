#include <string>
#include "HashTable"

using namespace std;

template <typename T>
Node<T>::Node() : key{}, value{}
{
}

template <typename T>
Node<T>::Node(const T key, const T value) : key{key}, value{value}
{
}

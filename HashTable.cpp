#include "HashTable"

#include "Array"
#include "Array.cpp"

#include <iostream>

using namespace std;

template <typename K, typename V>
Node<K, V>::Node() : key{}, value{}
{
}

template <typename K, typename V>
Node<K, V>::Node(const K key, const V value) : key{key}, value{value}
{
}

template <typename K, typename V>
K Node<K, V>::getKey() const
{
    return key;
}

template <typename K, typename V>
V Node<K, V>::getValue() const
{
    return value;
}

template <typename K, typename V>
HashTable<K, V>::HashTable(const int length) : list{new Array<Node<K, V>>{length}}
{
}

template <typename K, typename V>
HashTable<K, V>::~HashTable()
{
    delete list;
    list = nullptr;
}

template <typename K, typename V>
int HashTable<K, V>::hash(const K key) const
{
    int index;
    int keyInt;

    if (*(typeid(key).name()) == 'i')
        keyInt = key;

    index = keyInt % list->length;

    cout << index << endl;
    return index;
}

template <typename K, typename V>
void HashTable<K, V>::put(const K key, const V value)
{
    Node<K, V> *newNode = new Node{key, value};
    int index = hash(key);
    list->insertAt(*newNode, index);
    delete newNode;
    newNode = nullptr;
}
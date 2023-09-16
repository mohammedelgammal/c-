#include "HashTable"

#include "Array"
#include "Array.cpp"

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
HashTable<K, V>::HashTable() : list{new Array<Node<K, V>>}
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
    index = 0;

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
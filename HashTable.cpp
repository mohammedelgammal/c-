#include "HashTable"
#include "LinkedList"
#include "LinkedList.cpp"

HashTable::HashTable(const size_t size) : size{size}, array{new LinkedList<Entry>[size]}
{
}

HashTable::~HashTable()
{
    delete[] array;
}

int HashTable::hash(const int key) const
{
    int index;
    index = key % size;
    return index;
}

void HashTable::put(const int key, const string value)
{
    int index = hash(key);

    if (!array[index])
    {
        
    }
}
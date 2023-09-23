#include "HashTable"
#include "LinkedList"
#include "LinkedList.cpp"

#include <string>

HashTable::HashTable(const size_t size) : size{size}, array{new LinkedList<Entry>[size]}
{
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
    Entry entry = {key, value};

    array[index].addLast(entry);
}

string HashTable::get(const int key) const
{
    int index = hash(key);
    string targetValue;
    vector<Entry> list = array[index].toArray();

    for (Entry entry : list)
    {
        if (entry.key == key)
        {
            targetValue = entry.value;
            return targetValue;
        }
    }

    return targetValue;
}
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
    string targetValue = "";
    cout << index << endl;

    for (int i = 0; i < size; i++)
    {
        if (array[index][i].key == key)
        {
            targetValue = array[index][i].value;
            return targetValue;
        }
    }
    return targetValue;
}
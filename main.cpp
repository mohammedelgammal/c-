// Libraries
#include <iostream>
#include <string>

// Data Structures
#include "HashTable"
#include "HashTable.cpp"

using namespace std;

int main()
{
    HashTable<int, int> hashTable;

    hashTable.put(1, 1);

    return 0;
}
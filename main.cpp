// Libraries
#include <iostream>

using namespace std;

#include "HashTable"

int main()
{
    HashTable hashTable(3);

    hashTable.put(4, "Mohammed");
    hashTable.put(6, "Jamil");
    hashTable.put(12, "Houda");
    hashTable.put(3, "Mahmoud");
    hashTable.put(5, "Ali");

    cout << hashTable.get(6) << endl;

    return 0;
}
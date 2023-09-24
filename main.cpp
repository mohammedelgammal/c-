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

    cout << hashTable.get(5) << endl;
    hashTable.remove(5);
    cout << hashTable.get(5) << endl;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};

    vector<int>::iterator ite = vec.begin();

    cout << "Second vector element is: " << *(++ite) << endl;

    // using normal increment iterators to traverse the vector vec
    for (vector<int>::iterator ite = vec.end(); ite > --vec.begin(); --ite)
    {
        cout << *ite;
    }

    return 0;
}
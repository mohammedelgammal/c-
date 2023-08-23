#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};

    vector<int>::iterator ite = vec.begin();
    vector<int>::reverse_iterator rite = vec.rbegin();
    vector<int>::iterator raite = vec.begin();

    cout << "Second vector element is: " << *(++ite) << endl;

    cout << "Second to last element is: " << *(++rite) << endl;

    // using the random access iterator to loop through the vector
    while (raite < vec.end())
    {
        cout << *raite;
        // ++raite;
        advance(raite, 2); 
    }

    return 0;
}
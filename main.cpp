#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};

    vector<int>::iterator ite = vec.begin();
    vector<int>::reverse_iterator rite = vec.rbegin();

    cout << "Second vector element is: " << *(++ite) << endl;

    cout << "Second to last element is: " << *(++rite) << endl;

    // using bidirectional iterator to loop through the vector in a reverse way
    for (vector<int>::reverse_iterator rite = vec.rbegin(); rite < vec.rend(); ++rite)
    {
        cout << *rite;
    }

    return 0;
}
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

    // using input iterator to iterate through input stream
    cout << "Please enter as many chars as you want (Ctrl + D) to exit!" << endl;

    istream_iterator<int> iite(std::cin);
    istream_iterator<int> end;

    while (iite != end)
    {
        vec.push_back(*iite);
        ++iite;
    }

    return 0;
}
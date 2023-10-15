// Libraries
#include <iostream>
#include <stack>

using namespace std;

int linearSearch(vector<int> &unsorted, int target)
{
    for (int i = 0; i < unsorted.size(); i++)
    {
        if (unsorted[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> unsorted{7, 3, 1, 4, 6, 2, 3};

    int result = linearSearch(unsorted, 0);

    cout << result << endl;

    return 0;
}
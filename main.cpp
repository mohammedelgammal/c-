// Libraries
#include <iostream>
#include <stack>

using namespace std;

int binarySearchRecursion(vector<int> &unsorted, int target)
{
    if (unsorted.empty())
        return -1;

    int middleIndex = unsorted.size() / 2, targetIndex;
    vector<int>::iterator start, end;

    if (unsorted.size() < 1)
        return -1;

    if (unsorted[middleIndex] == target)
        return middleIndex;

    if (unsorted[middleIndex] > target)
    {
        start = unsorted.begin();
        end = unsorted.begin() + middleIndex;
    }
    else
    {
        start = unsorted.begin() + middleIndex;
        end = unsorted.end();
    }

    vector<int> sorted{start, end};

    return binarySearchRecursion(sorted, target);
}

int main()
{
    vector<int> unsorted{};

    int result = binarySearchRecursion(unsorted, 0);

    cout << result << endl;

    return 0;
}
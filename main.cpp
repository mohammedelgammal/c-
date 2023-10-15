// Libraries
#include <iostream>
#include <stack>

using namespace std;

int binarySearchIter(vector<int> &unsorted, int target)
{
    if (unsorted.empty())
        return -1;

    int middleIndex = unsorted.size() / 2;
    vector<int>::iterator leftBoundary = unsorted.begin(),
                          rightBoundary = unsorted.end();

    while (!unsorted.empty())
    {
        if (unsorted[middleIndex] == target)
            return middleIndex;

        if (middleIndex == 0)
            return -1;

        if (unsorted[middleIndex] > target)
        {
            leftBoundary = unsorted.begin();
            rightBoundary = unsorted.begin() + middleIndex;
        }
        else
        {
            leftBoundary = unsorted.begin() + middleIndex;
            rightBoundary = unsorted.end();
        }

        unsorted.assign(leftBoundary, rightBoundary);
        middleIndex = unsorted.size() / 2;
    }

    return -1;
}

int main()
{
    vector<int> unsorted{1, 2, 3, 4, 5, 6, 7};

    int result = binarySearchIter(unsorted, 7);

    cout << result << endl;

    return 0;
}
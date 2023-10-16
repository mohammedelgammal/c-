// Libraries
#include <iostream>

using namespace std;

int binarySearch(vector<int> &unsorted, int target)
{
    int leftIndex = 0, rightIndex = unsorted.size() - 1, middleIndex;

    while (true)
    {
        middleIndex = (leftIndex + rightIndex) / 2;

        if (unsorted[middleIndex] == target)
            return middleIndex;

        if (leftIndex == rightIndex)
            return -1;

        unsorted[middleIndex] > target
            ? rightIndex = middleIndex - 1
            : leftIndex = middleIndex + 1;
    }

    return -1;
}

int main()
{
    vector<int> unsorted{1, 2, 3, 4, 5, 6, 7};

    int result = binarySearch(unsorted, 9);

    cout << result << endl;

    return 0;
}
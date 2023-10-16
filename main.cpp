// Libraries
#include <iostream>

using namespace std;

int biSearch(vector<int> &unsorted, int left, int right, int target)
{
    int middle = (left + right) / 2;

    if (unsorted[middle] == target)
        return middle;

    if (left == right)
        return -1;

    unsorted[middle] > target
        ? right = middle - 1
        : left = middle + 1;

    return biSearch(unsorted, left, right, target);
}

int binarySearch(vector<int> &unsorted, int target)
{
    return biSearch(unsorted, 0, unsorted.size() - 1, target);
}

int main()
{
    vector<int> unsorted{1, 2, 3, 4, 5, 6, 7};

    int result = binarySearch(unsorted, 9);

    cout << result << endl;

    return 0;
}
// Libraries
#include <iostream>

using namespace std;

int terSearch(vector<int> &unsorted, int left, int right, int target)
{
    int partition = right - left,
        midOne = left + partition,
        midTwo = right - partition;

    if (unsorted[midOne] == target)
        return midOne;

    if (unsorted[midTwo] == target)
        return midTwo;

    if (left == right)
        return -1;

    if (target < unsorted[midOne])
        right = midOne - 1;

    if (target > unsorted[midTwo])
        left = midTwo + 1;

    if (target > unsorted[midOne] && target < unsorted[midTwo])
    {
        right = midTwo - 1;
        left = midOne + 1;
    }

    return terSearch(unsorted, left, right, target);
}

int ternarySearch(vector<int> &unsorted, int target)
{
    return terSearch(unsorted, 0, unsorted.size() - 1, target);
}

int main()
{
    vector<int> unsorted{1, 2, 3, 4, 5, 6, 7};

    int result = ternarySearch(unsorted, 9);

    cout << result << endl;

    return 0;
}
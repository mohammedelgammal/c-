// Libraries
#include <iostream>

#include "Solution"

using namespace std;

void swap(vector<int> &unsorted, int &boundary, int i)
{
    int temp = unsorted[boundary];

    unsorted[boundary] = unsorted[i];
    unsorted[i] = temp;
}

void quickSort(vector<int> &unsorted, int startIndex, int endIndex)
{
    if (endIndex - startIndex <= 0)
        return;

    int pivot = unsorted[endIndex],
        boundary = startIndex - 1;

    for (int i = startIndex; i <= endIndex; i++)
        if (unsorted[i] <= pivot)
            swap(unsorted, ++boundary, i);

    quickSort(unsorted, startIndex, boundary - 1);
    quickSort(unsorted, boundary + 1, endIndex);
}

void quickSort(vector<int> &unsorted)
{
    quickSort(unsorted, 0, unsorted.size() - 1);
}

int main()
{
    Solution solution;

    vector<int> unsorted{5, 2, 1, 3, 6, 9, 8, 4, 2, 5, 1, 3, 6, 9};

    quickSort(unsorted);

    for (int i = 0; i < unsorted.size(); i++)
        cout << unsorted[i] << ", ";

    return 0;
}
// Libraries
#include <iostream>
#include <stack>

using namespace std;

void merge(vector<int> &left, vector<int> &right, vector<int> &unsorted)
{
    int i = 0, j = 0, k = 0;

    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
            unsorted[k++] = left[i++];
        else
            unsorted[k++] = right[j++];
    }

    while (i < left.size())
        unsorted[k++] = left[i++];

    while (j < right.size())
        unsorted[k++] = right[j++];
}

void mergeSort(vector<int> &unsorted)
{
    if (unsorted.size() < 2)
        return;

    int middleIndex = unsorted.size() / 2;

    vector<int> left{unsorted.begin(), (unsorted.begin() + middleIndex)},
        right{(unsorted.begin() + middleIndex), unsorted.end()};

    mergeSort(left);
    mergeSort(right);

    merge(left, right, unsorted);
}

int main()
{
    vector<int> unsorted{7, 3, 1, 4, 6, 2, 3};

    mergeSort(unsorted);

    for (int i = 0; i < unsorted.size(); i++)
        cout << unsorted[i];

    return 0;
}
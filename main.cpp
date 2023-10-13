// Libraries
#include <iostream>
#include <stack>

using namespace std;

int getMinIndex(vector<int> &sliced)
{
    int minIndex = 0;

    for (int i = 0; i < sliced.size(); i++)
        if (sliced[i] < sliced[minIndex])
            minIndex = i;

    return minIndex;
}

void selectionSort(vector<int> &unsorted)
{
    for (int i = 0; i < unsorted.size(); i++)
    {
        vector<int> sliced{unsorted.begin() + i, unsorted.end()};
        int unsortedIndex = getMinIndex(sliced) + i;
        if (unsorted[i] != unsorted[unsortedIndex])
        {
            int temp = unsorted[i];
            unsorted[i] = unsorted[unsortedIndex];
            unsorted[unsortedIndex] = temp;
        }
    }
}

int main()
{
    vector<int> unsorted{7, 3, 1, 4, 6, 2, 3};

    selectionSort(unsorted);

    for (int i = 0; i < unsorted.size(); i++)
        cout << unsorted[i];

    return 0;
}
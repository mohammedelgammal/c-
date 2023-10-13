// Libraries
#include <iostream>
#include <stack>

using namespace std;

void bubbleSort(vector<int> &unsorted)
{
    size_t size = unsorted.size();
    bool isSorted;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
            if (unsorted[i] > unsorted[j])
            {
                int temp = unsorted[i];
                unsorted[i] = unsorted[j];
                unsorted[j] = temp;
                isSorted = false;
            }
        if (isSorted)
            return;
    }
}

int main()
{
    // Bubble Sort
    vector<int> unsorted{7, 3, 1, 4, 6, 2, 3};

    bubbleSort(unsorted);

    for (int i = 0; i < unsorted.size(); i++)
        cout << unsorted[i];

    return 0;
}
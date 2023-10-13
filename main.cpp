// Libraries
#include <iostream>
#include <stack>

using namespace std;

void bubbleSort(vector<int> &unsorted)
{
    int size = unsorted.size();

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (unsorted[i] < unsorted[j])
            {
                int temp = unsorted[i];
                unsorted[i] = unsorted[j];
                unsorted[j] = temp;
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
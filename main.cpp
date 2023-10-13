// Libraries
#include <iostream>
#include <stack>

using namespace std;

void insertionSort(vector<int> &unsorted)
{
    vector<int> *sorted = new vector<int>{};

    for (int i = 0; i < unsorted.size(); i++)
    {
        vector<int>::iterator iterIndex = sorted->end();

        for (int j = 0; j < sorted->size(); j++)
        {
            if (unsorted[i] < (*sorted)[j])
            {
                iterIndex = sorted->begin() + j;
                break;
            }
        }
        sorted->insert(iterIndex, unsorted[i]);
    }
    unsorted = *sorted;
    sorted = nullptr;
}

int main()
{
    vector<int> unsorted{7, 3, 1, 4, 6, 2, 3};

    insertionSort(unsorted);

    for (int i = 0; i < unsorted.size(); i++)
        cout << unsorted[i];

    return 0;
}
// Libraries
#include <iostream>
#include <stack>

using namespace std;

void quickSort(vector<int> &unsorted)
{
    if (unsorted.size() <= 1)
        return;

    int pivot = unsorted.back(),
        boundary = -1,
        i = 0;

    for (int i = 0; i < unsorted.size(); i++)
    {
        if (unsorted[i] <= pivot)
        {
            int temp = unsorted[i];

            unsorted[i] = unsorted[++boundary];
            unsorted[boundary] = temp;
        }
    }

    vector<int> left = {unsorted.begin(), (unsorted.begin() + boundary)},
                right = {(unsorted.begin() + boundary), unsorted.end()};

    quickSort(left);
    quickSort(right);

    // merge left & right by adding right to left
    left.insert(left.end(), right.begin(), right.end());
    unsorted = left;
}

int main()
{
    vector<int> unsorted{7, 3, 1, 4, 6, 2, 3};

    quickSort(unsorted);

    for (int i = 0; i < unsorted.size(); i++)
        cout << unsorted[i];

    return 0;
}
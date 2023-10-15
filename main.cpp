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

void bucketSort(vector<int> &unsorted)
{
    vector<vector<int>> buckets;
    vector<int> sorted;

    buckets.assign(3, vector<int>{});

    for (int i = 0; i < unsorted.size(); i++)
    {
        int bucketIndex = unsorted[i] / 3;
        buckets[bucketIndex].push_back(unsorted[i]);
    }

    for (int j = 0; j < buckets.size(); j++)
        bubbleSort(buckets[j]);

    for (int k = 0; k < buckets.size(); k++)
        sorted.insert(sorted.end(), buckets[k].begin(), buckets[k].end());

    unsorted = sorted;
}

int main()
{
    vector<int> unsorted{7, 3, 1, 4, 6, 2, 3};

    bucketSort(unsorted);

    for (int i = 0; i < unsorted.size(); i++)
        cout << unsorted[i];

    return 0;
}
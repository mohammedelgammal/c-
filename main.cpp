// Libraries
#include <iostream>

using namespace std;

int leftChildIndex(const int index)
{
    return (index * 2) + 1;
}

int rightChildIndex(const int index)
{
    return (index * 2) + 2;
}

int greaterChildIndex(vector<int> &arr, const int index)
{
    return arr[leftChildIndex(index)] > arr[rightChildIndex(index)]
               ? leftChildIndex(index)
               : rightChildIndex(index);
}

void bubbleDown(vector<int> &arr, int index)
{
    while (greaterChildIndex(arr, index) < arr.size() &&
           arr[index] < arr[greaterChildIndex(arr, index)])
    {
        int current = arr[index];
        arr[index] = arr[greaterChildIndex(arr, index)];
        arr[greaterChildIndex(arr, index)] = current;
        index = greaterChildIndex(arr, index);
    }
}

void heapify(vector<int> &arr)
{
    if (arr.empty())
        return;

    for (int i = 0; i < arr.size(); i++)
        bubbleDown(arr, i);
}

int main()
{
    vector<int> arr{5, 3, 8, 4, 1, 2};

    heapify(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << '|';

    return 0;
}
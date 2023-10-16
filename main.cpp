// Libraries
#include <iostream>

using namespace std;

int jumpSearch(vector<int> &unsorted, int target)
{
    int blockSize = sqrt(unsorted.size()),
        firstIndex = 0,
        lastIndex = blockSize - 1;

    while (firstIndex < unsorted.size())
    {
        if (lastIndex >= unsorted.size())
            lastIndex = unsorted.size() - 1;

        if (unsorted[lastIndex] == target)
            return lastIndex;

        if (unsorted[lastIndex] > target)
        {
            for (int i = firstIndex; i < blockSize; i++)
                if (unsorted[i] == target)
                    return i;
            return -1;
        }

        firstIndex = lastIndex + 1;
        lastIndex = lastIndex + blockSize;
    }

    return -1;
}

int main()
{
    vector<int> unsorted{1, 2, 3, 4, 5, 6, 7};

    int result = jumpSearch(unsorted, 7);

    cout << result << endl;

    return 0;
}
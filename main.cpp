// Libraries
#include <iostream>

using namespace std;

int exponentialSearch(vector<int> &unsorted, int target)
{
    int startIndex = 0,
        endIndex = 0;

    while (startIndex < unsorted.size())
    {
        if (endIndex > unsorted.size())
            endIndex = unsorted.size() - 1;

        if (unsorted[endIndex] == target)
            return endIndex;

        if (unsorted[endIndex] > target)
        {
            for (int i = startIndex; i <= endIndex; i++)
                if (unsorted[i] == target)
                    return i;

            return -1;
        }

        startIndex = endIndex + 1;

        if (endIndex < 2)
            endIndex++;

        endIndex *= endIndex;
    }

    return -1;
}

int main()
{
    vector<int> unsorted{};

    int result = exponentialSearch(unsorted, 4);

    cout << result << endl;

    return 0;
}
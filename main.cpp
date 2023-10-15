// Libraries
#include <iostream>
#include <stack>

using namespace std;

int maxOf(vector<int> &unsorted)
{
    int max = unsorted[0];

    for (int i = 0; i < unsorted.size(); i++)
        if (unsorted[i] > max)
            max = unsorted[i];

    return max;
}

void countSort(vector<int> &unsorted)
{
    if (unsorted.empty())
        return;

    vector<int> count;
    int size = maxOf(unsorted) + 1, value = 0, i = 0, j = 0, h = 0;

    count.assign(size, value);

    while (i < unsorted.size())
        count[unsorted[i++]]++;

    while (j < count.size())
    {
        int occurences = count[j],
            num = j++, k = 0;

        if (occurences != 0)
            while (k++ < occurences)
                unsorted[h++] = num;
    }
}

int main()
{
    vector<int> unsorted{};

    countSort(unsorted);

    for (int i = 0; i < unsorted.size(); i++)
        cout << unsorted[i];

    return 0;
}
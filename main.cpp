#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    struct descending
    {
        bool operator()(int a, int b)
        {
            return a > b;
        }
    };
    struct char_compare
    {
        bool operator()(char *a, char *b)
        {
            return strcmp(a, b) < 0 ? true : false;
        }
    };

    int arr[]{1, 2, 3, 4, 5};
    char *names[]{"mohammed", "mahmoud", "ali", "amr", "amir"};

    sort(names, names + 5, char_compare());

    for (char *name : names)
    {
        cout << name << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    struct is_ali
    {
        bool operator()(string name)
        {
            return name == "ali";
        }
    };

    string names[] = {"mohammed",
                      "ahmed",
                      "mahmoud",
                      "ali"};

    // cout << *find(names, names + 4, "mahmoud") << endl;
    cout << *find_if(names, names + 6, is_ali()) << endl;
    return 0;
}
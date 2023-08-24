#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void add_mr(string name)
{
    cout << "Mr. " << name << endl;
}

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
    // cout << *find_if(names, names + 6, is_ali()) << endl;

    for_each(names, names + 4, add_mr);

    return 0;
}
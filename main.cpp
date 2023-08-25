#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void add_mr(string name)
{
    cout << "Mr. " << name << endl;
}
string modify_add_mr(string name)
{
    return "Mr. " + name;
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

    string mr_names[4];

    cout << *find(names, names + 4, "mahmoud") << endl;
    // cout << *find_if(names, names + 6, is_ali()) << endl;

    for_each(names, names + 4, add_mr);

    transform(names, names + 4, mr_names, modify_add_mr);

    for (string name : mr_names)
    {
        cout << "Mr name is: " << name << "\n-";
    }

    return 0;
}
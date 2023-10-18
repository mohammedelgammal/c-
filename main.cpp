// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;
    vector<int> num1{0}, num2{1};

    solution.merge(num1, 0, num2, 1);

    for (int i = 0; i < num1.size(); i++)
    {
        cout << num1[i] << " | ";
    }

    cout << "merged size: " << num1.size();

    return 0;
}
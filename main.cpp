// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> product{1, 2, 3, 4};

    for (int el : solution.productExceptSelf(product))
        cout << el << ',';
    return 0;
}
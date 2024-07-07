#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;
    
    vector<int> histogram{2, 1, 5, 6, 2, 3};

    cout << solution.largestRectangleArea(histogram);

    return 0;
}
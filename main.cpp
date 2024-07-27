#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums1 = {1, 3}, nums2 = {2};

    cout << solution.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}
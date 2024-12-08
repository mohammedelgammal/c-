#include <iostream>
#include <algorithm>

#include "Solution"

int findKthLargest(vector<int> &nums, int k)
{
    int n = nums.size();
    k = n - k;
    function<int(int, int)> quickSelect = [&](int l, int r) {
        int pivot = nums[r],
            p = l;
        for(int i = l; i < r; i++) {
            if(nums[i] < pivot) {
                swap(nums[i], nums[p]);
                p += 1;
            }
        }
        swap(nums[p], nums[r]);
        if(p > k) {
            return quickSelect(l, p - 1);
        } else if(p < k) {
            return quickSelect(p + 1, r);
        }
        return nums[p];
    };
    return quickSelect(0, n - 1);
}
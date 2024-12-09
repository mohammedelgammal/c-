#include "IntroSelect"

double introSelect(vector<int> &nums)
{
    int size = nums.size(),
        m = size / 2;
    function<int(int, int)> medianOfMedians = [&](int l, int r)
    {
        vector<int> medians;
        for (int i = l; i <= r; i += 5)
        {
            int left = i, right = min(i + 5, r + 1),
                mid = left + (right - left) / 2;
            sort(nums.begin() + left, nums.begin() + right);
            medians.push_back(nums[mid]);
        }
        if (medians.size() == 1)
            return medians[0];
        sort(medians.begin(), medians.end());
        int mid = medians.size() / 2;
        return medians[mid];
    };
    function<int(int, int, int)> quickSelect = [&](int l, int r, int m)
    {
        int pivot = medianOfMedians(l, r), index = r, p = l;
        for (int i = l; i <= r; i++)
        {
            if (nums[i] == pivot)
            {
                index = i;
                swap(nums[index], nums[r]);
                break;
            }
        }
        for (int i = l; i < r; i++)
        {
            if (nums[i] < nums[r])
            {
                swap(nums[i], nums[p]);
                p += 1;
            }
        }
        swap(nums[p], nums[r]);
        if (p > m)
        {
            return quickSelect(l, p - 1, m);
        }
        else if (p < m)
        {
            return quickSelect(p + 1, r, m);
        }
        return nums[p];
    };
    if (size % 2 == 0)
    {
        int m1 = quickSelect(0, size - 1, m - 1),
            m2 = quickSelect(0, size - 1, m);
        return (m1 + m2) / 2.0;
    }
    return quickSelect(0, size - 1, m);
}
#include <iostream>
#include <algorithm>

#include "Solution"

double Solution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> &A = nums1, &B = nums2;
    if(A.size() > B.size()) swap(A, B);
    int total = A.size() + B.size(), 
        half = total / 2,
        l = 0, r = A.size() - 1;
    while(true) {
        int i = r >= 0 ? (l + r) / 2 : -1,
            j = half - i - 2,
            Al = i >= 0 ? A[i] : INT_MIN,
            Ar = i + 1 < A.size() ? A[i + 1] : INT_MAX,
            Bl = j >= 0 ? B[j] : INT_MIN, 
            Br = j + 1 < B.size() ? B[j + 1] : INT_MAX;
        if(Al <= Br && Bl <= Ar) 
            return total % 2 ? min(Ar, Br) : (max(Al, Bl) + min(Ar, Br)) / 2.0;
        else if(Al > Br) r = i - 1;
        else l = i + 1; 
    }
    return -1;
}
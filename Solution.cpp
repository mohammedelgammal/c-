#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::add(int val)
{
    pq.push(val);
    if (pq.size() > k)
        pq.pop();
    return pq.top();
}
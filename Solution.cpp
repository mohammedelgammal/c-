#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::lastStoneWeight(vector<int>& stones) {
    priority_queue<int> pq;
    for(int stone : stones) pq.push(stone);
    while(pq.size() > 1) {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        if(first != second) 
            pq.push(first - second);
    }
    pq.push(0);
    return pq.top();
}
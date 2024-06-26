#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::carFleet(int target, vector<int> &position, vector<int> &speed)
{
    int n = position.size();
    vector<pair<double, double>> ordered;
    for (int i = 0; i < n; i++) 
        ordered.push_back({position[i], speed[i]});
    sort(ordered.begin(), ordered.end());
    stack<double> stack;
    for(int i = n - 1; i >= 0; i--) {
        double time = (target - ordered[i].first) / ordered[i].second;
        if(!stack.empty() && time <= stack.top()) continue;
        stack.push(time);
    }
    return stack.size();
}
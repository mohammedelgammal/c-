#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::calPoints(vector<string> &operations)
{
    stack<int> stack;
    for(string &op : operations) {
        if(op == "+") {
            int top = stack.top();
            stack.pop();
            int sum = top + stack.top();
            stack.push(top);
            stack.push(sum);
        } else if (op == "D") {
            stack.push(stack.top() * 2);
        } else if (op == "C") {
            stack.pop();
        } else {
            int num = stoi(op);
            stack.push(num);
        }
    }
    int ans = 0;
    while(!stack.empty()) {
        ans += stack.top();
        stack.pop();
    }
    return ans;
}
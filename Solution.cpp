#include <iostream>
#include <algorithm>

#include "Solution"

string Solution::makeGood(string s)
{
    stack<char> stack;
    for(char ch : s) {
        if(!stack.empty() && abs(ch - stack.top()) == 32) stack.pop();
        else stack.push(ch);
    }
    string ans(stack.size(), ' ');
    for(int i = stack.size() - 1; i >= 0; i--) {
        ans[i] = stack.top();
        stack.pop();
    }
    return ans;
}
#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::evalRPN(vector<string> &tokens)
{
    unordered_set<string> operators{"+", "-", "*", "/"};
    stack<int> stack;
    for (string token : tokens)
    {
        if (operators.contains(token))
        {
            int op2 = stack.top();
            stack.pop();
            int op1 = stack.top();
            stack.pop();
            if (token == "+")
                stack.push(op1 + op2);
            else if (token == "-")
                stack.push(op1 - op2);
            else if (token == "*")
                stack.push(op1 * op2);
            else
                stack.push(op1 / op2);
        }
        else
        {
            stack.push(stoi(token));
        }
    }
    return stack.top();
}
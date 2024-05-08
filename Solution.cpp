#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::isValid(string s)
{
    stack<char> stack;
    unordered_map<char, char> map{{'{', '}'}, {'[', ']'}, {'(', ')'}};
    for (char ch : s)
        if (map.contains(ch))
            stack.push(ch);
        else if (!stack.empty() && map[stack.top()] == ch)
            stack.pop();
        else
            return false;

    return stack.empty();
}
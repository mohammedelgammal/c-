#include <iostream>
#include <algorithm>

#include "Solution"

Node *Solution::cloneGraph(Node *node)
{
    if (!node)
        return nullptr;
    unordered_map<Node *, Node *> visited;
    stack<Node *> stack;
    Node *clonedNode = new Node(node->val);
    visited[node] = clonedNode;
    stack.push(node);
    while (!stack.empty())
    {
        Node *top = stack.top();
        stack.pop();
        for (Node *neighbor : top->neighbors)
        {

            if (!visited.contains(neighbor))
            {
                Node *cloned = new Node(neighbor->val);
                visited[neighbor] = cloned;
                stack.push(neighbor);
            }
            visited[top]->neighbors.push_back(visited[neighbor]);
        }
    }
    return visited[node];
}
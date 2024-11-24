#include <iostream>
#include <algorithm>

#include "Solution"

Node *clone(Node *node, unordered_map<Node *, Node *> &visited)
{
    if (visited.contains(node))
        return visited[node];
    Node *cloned = new Node(node->val);
    visited[node] = cloned;
    for (Node *neighbor : node->neighbors)
        cloned->neighbors.push_back(clone(neighbor, visited));
    return cloned;
}

Node *Solution::cloneGraph(Node *node)
{
    if (!node)
        return nullptr;
    unordered_map<Node *, Node *> visited;
    return clone(node, visited);
}
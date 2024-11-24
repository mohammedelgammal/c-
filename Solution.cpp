#include <iostream>
#include <algorithm>

#include "Solution"

Node *Solution::cloneGraph(Node *node)
{
    if(!node) 
        return nullptr;
    unordered_map<Node*, Node*> visited;
    queue<Node*> queue;
    Node *clonedNode = new Node(node->val);
    visited[node] = clonedNode;
    queue.push(node);
    while(!queue.empty()) {
        Node *front = queue.front();
        queue.pop();
        for(Node *neighbor : front->neighbors) {
            if(!visited.contains(neighbor)) {
                Node *cloned = new Node(neighbor->val);
                visited[neighbor] = cloned;
                queue.push(neighbor);
            }
            visited[front]->neighbors.push_back(visited[neighbor]);
        }
    }
    return visited[node];
}
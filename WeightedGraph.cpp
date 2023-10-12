#include "WeightedGraph"

#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <climits>

using namespace std;

WeightedGraph::WeightedGraph() : graph{new unordered_map<string, set<Edge *>>} {}

WeightedGraph::~WeightedGraph()
{
    // deallocating all edges
    for (auto &node : *graph)
        for (Edge *edge : node.second)
        {
            delete edge;
            edge = nullptr;
        }

    delete graph;
    graph = nullptr;
}

bool WeightedGraph::hasNode(const string label) const
{
    return graph->count(label);
}

void WeightedGraph::addNode(const string label)
{
    set<Edge *> edge;

    graph->insert({label, edge});
}

void WeightedGraph::addEdge(const int weight, const string from, const string to)
{
    if (!hasNode(from) || !hasNode(to))
        return;

    set<Edge *> &fromSet = graph->find(from)->second,
                &toSet = graph->find(to)->second;

    fromSet.insert(new Edge{weight, from, to});
    toSet.insert(new Edge{weight, to, from});
}

bool isLast(const Edge *edge, const set<Edge *> set)
{
    return edge == *--set.end();
}

void WeightedGraph::traverse() const
{
    for (auto &node : *graph)
    {
        cout << node.first << " is connected with: [";
        for (Edge *edge : node.second)
            cout << edge->toString() << (!isLast(edge, node.second) ? ", " : "");
        cout << ']' << endl;
    }
}

struct NodeEntry
{
    NodeEntry(const string label, const int priority) : label{label}, priority{priority} {};
    string label;
    int priority;
    bool operator<(const NodeEntry &other) const
    {
        return priority > other.priority;
    }
};

void WeightedGraph::shortestPath(const string label) const
{
    unordered_map<string, int> shortestDistances;

    for (const auto &child : *graph)
    {
        int defaultDistance = child.first == label ? 0 : INT_MAX;
        shortestDistances.insert({child.first, defaultDistance});
    }

    priority_queue<NodeEntry *> visiting;
    set<string> visited;

    visiting.push(new NodeEntry{label, 0});

    while (!visiting.empty())
    {
        NodeEntry *current = visiting.top();
        visiting.pop();
        visited.insert(current->label);

        for (const Edge *edge : graph->find(current->label)->second)
        {
            if (visited.contains(edge->to))
                continue;

            const int newDistance = shortestDistances.find(edge->from)->second + edge->weight;

            if (newDistance < shortestDistances.find(edge->to)->second)
                shortestDistances.find(edge->to)->second = newDistance;

            visiting.push(new NodeEntry{edge->to, shortestDistances.find(edge->from)->second});
        }
    }
}
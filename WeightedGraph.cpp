#include "WeightedGraph"
#include <iostream>
#include <string>
#include <set>

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
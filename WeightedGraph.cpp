#include "WeightedGraph"
#include <iostream>
#include <string>
#include <set>

using namespace std;

WeightedGraph::~WeightedGraph()
{
    delete graph;
    graph = nullptr;
}

bool WeightedGraph::hasNode(const string label) const
{
    return graph->count(label);
}

void WeightedGraph::insert(const string label)
{
    graph->insert({label, set<Edge *>{}});
}

void WeightedGraph::addEdge(const int weight, const string from, const string to)
{
    if (!hasNode(from) || !hasNode(to))
        return;

    set<Edge *> fromSet = graph->find(from)->second,
                toSet = graph->find(to)->second;

    Edge fromEdge{weight, from, to},
        toEdge{weight, to, from};

    fromSet.insert(&fromEdge);
    toSet.insert(&toEdge);
}

#include "Graph"

Graph::Graph(){};

Graph::~Graph()
{
    delete graph;
    graph = nullptr;
}
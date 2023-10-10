// Libraries
#include <iostream>

#include "WeightedGraph"

using namespace std;

int main()
{
    WeightedGraph graph;

    graph.addNode("A");
    graph.addNode("B");
    graph.addNode("C");

    graph.addEdge(3, "A", "B");
    graph.addEdge(2, "A", "C");

    graph.traverse();

    return 0;
}
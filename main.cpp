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
    graph.addNode("D");
    graph.addNode("E");

    graph.addEdge(3, "A", "B");
    graph.addEdge(4, "A", "C");
    graph.addEdge(2, "A", "D");
    graph.addEdge(6, "B", "D");
    graph.addEdge(1, "C", "D");
    graph.addEdge(1, "B", "E");
    graph.addEdge(5, "D", "E");

    // graph.traverse();

    graph.shortestPath("A");

    return 0;
}
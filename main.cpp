// Libraries
#include <iostream>

#include "Graph"

using namespace std;

int main()
{
    Graph graph;

    graph.addNode("A");
    graph.addNode("B");
    graph.addNode("C");

    graph.addEdge("A", "C");
    graph.addEdge("A", "B");
    graph.addEdge("A", "N");
    graph.addEdge("B", "A");
    graph.addEdge("B", "C");

    // graph.removeEdge("B", "C");
    graph.removeEdge("A", "C");
    graph.removeEdge("C", "A");

    graph.removeNode("C");

    graph.traverse();

    return 0;
}
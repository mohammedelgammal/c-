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

    graph.addEdge("A", "B");
    graph.addEdge("A", "C");
    graph.addEdge("A", "A");

    graph.removeNode("C");

    graph.traverse();

    return 0;
}
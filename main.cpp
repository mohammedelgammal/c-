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

    graph.addEdge("B", "C");

    graph.traverse();

    return 0;
}
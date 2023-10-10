// Libraries
#include <iostream>

#include "Graph"

using namespace std;

int main()
{
    Graph graph;

    graph.addNode("X");
    graph.addNode("A");
    graph.addNode("B");
    graph.addNode("P");

    graph.addEdge("X", "A");
    graph.addEdge("X", "B");
    graph.addEdge("A", "P");
    graph.addEdge("B", "P");

    // graph.traverse();

    // graph.depthTraverse("A");

    // cout << "====" << endl;

    // graph.depthTraverseIter("C");

    // graph.breadthTraverseQueue("D");

    graph.topologicalOrder("X");

    return 0;
}
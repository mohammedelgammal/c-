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
    graph.addNode("D");

    graph.addEdge("A", "B");
    graph.addEdge("B", "D");
    graph.addEdge("D", "C");
    graph.addEdge("A", "C");

    // graph.traverse();

    // graph.depthTraverse("A");

    // cout << "====" << endl;

    // graph.depthTraverseIter("C");

    graph.breadthTraverseQueue("A");

    return 0;
}
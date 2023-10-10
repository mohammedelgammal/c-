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
    graph.addEdge("B", "C");
    graph.addEdge("A", "C");
    // graph.addEdge("C", "D");
    graph.addEdge("D", "A");

    // graph.traverse();

    // graph.depthTraverse("A");

    // cout << "====" << endl;

    // graph.depthTraverseIter("C");

    // graph.breadthTraverseQueue("D");

    // graph.topologicalOrder("X");

    cout << boolalpha << graph.hasCycle();

    return 0;
}
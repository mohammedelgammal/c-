// Libraries
#include <iostream>
#include <stack>

#include "WeightedGraph"

using namespace std;

int main()
{
    WeightedGraph graph;

    graph.addNode("A");
    graph.addNode("B");
    graph.addNode("C");
    graph.addNode("D");

    graph.addEdge(3, "A", "B");
    graph.addEdge(1, "A", "C");
    graph.addEdge(2, "B", "C");
    graph.addEdge(5, "C", "D");
    graph.addEdge(4, "B", "D");

    // graph.traverse();

    // stack<string> path = graph.shortestPath("A", "E");
    // int stackSize = path.size();

    // cout << boolalpha << graph.hasCycle() << endl;

    WeightedGraph *spanning = graph.spanningTree();

    spanning->traverse();

    return 0;
}
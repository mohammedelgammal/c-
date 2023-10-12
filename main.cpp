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

    graph.addEdge(1, "A", "B");
    graph.addEdge(2, "B", "C");
    graph.addEdge(10, "A", "C");

    // graph.traverse();

    // stack<string> path = graph.shortestPath("A", "E");
    // int stackSize = path.size();

    cout << boolalpha << graph.hasCycle() << endl;

    return 0;
}
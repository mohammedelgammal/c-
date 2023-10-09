#include "Graph"

#include <iostream>
#include <list>
using namespace std;

Graph::Graph() : adjanecyList{new unordered_map<string, list<Node *>>{}} {};

Graph::~Graph()
{
    delete adjanecyList;
    adjanecyList = nullptr;
}

void Graph::addNode(const string label)
{
    if (label.length() == 0)
        return;

    list<Node *> list;

    adjanecyList->insert({label, list});
}

void Graph::removeNode(const string label)
{
    if (adjanecyList->count(label) == 0)
        return;

    adjanecyList->erase(label);
    for (auto &child : *adjanecyList)
        for (const auto &node : child.second)
            if (node->label == label)
                child.second.remove(node);
}

void Graph::traverse() const
{
    for (auto &child : *adjanecyList)
    {
        cout << child.first << " Connected with: [ ";
        for (const auto &node : child.second)
            cout << node->label << ", ";
        cout << " ]" << endl;
    }
}
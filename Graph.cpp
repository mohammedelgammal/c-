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

bool Graph::hasNode(const string label) const
{
    return adjanecyList->count(label) > 0;
}

void Graph::addNode(const string label)
{
    if (label.length() == 0)
        return;

    list<Node *> list;

    adjanecyList->insert({label, list});
}

void removeNodeFromList(list<Node *> &list, const string label)
{
    for (auto node : list)
        if (node->label == label)
        {
            list.remove(node);
            break;
        }
}

void Graph::removeNode(const string label)
{
    if (!hasNode(label))
        return;

    adjanecyList->erase(label);

    for (auto &child : *adjanecyList)
        removeNodeFromList(child.second, label);
}

bool Graph::hasTarget(const string source, const string target) const
{
    bool hasTarget = false;
    list<Node *> sourceList = adjanecyList->find(source)->second;

    for (const auto &node : sourceList)
        if (node->label == target)
            hasTarget = true;

    return hasTarget;
}

bool Graph::isValidEdge(const string source, const string target) const
{
    return (source != target) && hasNode(source) && hasNode(target);
}

void Graph::addEdge(const string source, const string target)
{
    if (!isValidEdge(source, target))
        return;

    if (!hasTarget(source, target))
    {
        list<Node *> &sourceList = adjanecyList->find(source)->second;
        sourceList.push_back(new Node{target});
    }
}

void Graph::removeEdge(const string source, const string target)
{
    if (!isValidEdge(source, target) || !hasTarget(source, target))
        return;

    list<Node *> &sourceList = adjanecyList->find(source)->second;

    removeNodeFromList(sourceList, target);
}

bool isLast(const list<Node *> &list, auto &child)
{
    return child == list.back();
}

void Graph::traverse() const
{
    for (auto &child : *adjanecyList)
    {
        cout << child.first << " Connected with: [";
        for (const auto &node : child.second)
            cout << node->label << (!isLast(child.second, node) ? ", " : "");
        cout << "]" << endl;
    }
}

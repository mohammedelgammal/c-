#ifndef VISITOR
#define VISITOR

#include <iostream>
#include "Acceptor.hpp"
#include "Acceptor.cpp"

using namespace std;

class Visitor
{
public:
    virtual void visit(HeadingNode *headingNode);
    virtual void visit(AnchorNode *anchorNode);
};

class Highlight : public Visitor
{
public:
    void visit(HeadingNode *headingNode) override;
    void visit(AnchorNode *anchorNode) override;
};

class ExtractText : public Visitor
{
public:
    void visit(HeadingNode *headingNode) override;
    void visit(AnchorNode *anchorNode) override;
};

#endif // VISITOR
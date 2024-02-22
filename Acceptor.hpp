#ifndef ACCEPTOR
#define ACCEPTOR

#include "Visitor.hpp"
#include "Visitor.cpp"

class HTMLNode
{
public:
    virtual void accept(Visitor *visitor){};
};

class HeadingNode : public HTMLNode
{
public:
    void accept(Visitor *visitor);
};

class AnchorNode : public HTMLNode
{
public:
    void accept(Visitor *visitor);
};

#endif // ACCEPTOR
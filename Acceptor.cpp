#include "Acceptor.hpp"

void HeadingNode::accept(Visitor *visitor)
{
    visitor->visit(this);
}

void AnchorNode::accept(Visitor *visitor)
{
    visitor->visit(this);
}
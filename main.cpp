// Libraries
#include <iostream>

#include "Visitor.hpp"
#include "Visitor.cpp"
#include "Acceptor.hpp"
#include "Acceptor.cpp"

using namespace std;

int main()
{
    HeadingNode *heading = new HeadingNode();
    AnchorNode *anchor = new AnchorNode();
    Highlight *highlight = new Highlight();

    highlight->visit(heading);

    return 0;
}
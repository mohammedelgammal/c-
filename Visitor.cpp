#include "Visitor.hpp"

void Highlight::visit(HeadingNode *headingNode)
{
    cout << "Highlight heading" << endl;
}

void Highlight::visit(AnchorNode *anchorNode)
{
    cout << "Highlight anchor" << endl;
}

void ExtractText::visit(HeadingNode *headingNode)
{
    cout << "Extracting heading" << endl;
}

void ExtractText::visit(AnchorNode *anchorNode)
{
    cout << "Extracting anchor" << endl;
}
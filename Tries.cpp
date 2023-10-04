#include "Tries"
#include <iostream>

using std::vector, std::string;

Tries::Tries() : root{new Node}
{
}

Tries::~Tries()
{
    delete root;
    root = nullptr;
}

void Tries::insert(const string word)
{
    Node *current = root;
    int charIndex;

    for (char character : word)
    {
        charIndex = character - 'a';
        if (!current->children.at(charIndex))
            current->children.at(charIndex) = new Node{character};

        current = current->children.at(charIndex);
    }
    current->isWordEnding = true;
}
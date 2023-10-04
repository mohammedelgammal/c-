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

    for (char character : word)
    {
        if (!current->has(character))
            current->insert(character);

        current = current->get(character);
    }
    current->markAsEnd();
}
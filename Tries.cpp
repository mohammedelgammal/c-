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

bool Tries::contains(const string word) const
{
    Node *current = root;

    if (word.length() == 0)
        return true;

    for (char character : word)
    {
        if (!current->has(character))
            return false;
        current = current->get(character);
    }
    if (!current->isWordEnding)
        return false;

    return true;
}

void Tries::preOrderTraverse(const Node *root) const
{
    cout << root->character;

    for (Node *child : root->getChildren())
        preOrderTraverse(child);
}

void Tries::preOrderTraverse() const
{
    preOrderTraverse(root);
}

void Tries::postOrderTraverse(const Node *root) const
{
    for (Node *child : root->getChildren())
        postOrderTraverse(child);

    cout << root->character;
}

void Tries::postOrderTraverse() const
{
    postOrderTraverse(root);
}

bool isLastCharacter(const string word, const int index)
{
    return index == word.length();
}

void Tries::remove(Node &root, const string word, int index)
{
    if (root.character == -1)
        return;

    remove(*root.get(word[index]), word, index + 1);

    if (index == word.length())
    {
        root.isWordEnding = false;
    }

    if (root.get(word[index])->isLeafNode())
        root.deleteChild(word[index]);

    if (root.isLeafNode() && !root.isWordEnding)
    {
        delete &root;
        root = NULL;
    }
}

void Tries::remove(const string word)
{
    remove(*root, word, 0);
}

void Tries::preOrderTraversal(Node *root, string word, vector<string> &words)
{
    if (root == nullptr)
        return;

    if (root->isWordEnding)
        words.push_back(word);

    for (Node *child : root->getChildren())
        preOrderTraversal(child, word + child->character, words);
}

Node *Tries::findLastCharacterNode(string word)
{
    Node *lastNode = root;
    for (char character : word)
    {
        lastNode = lastNode->get(character);
        if (lastNode == nullptr)
            return nullptr;
    }

    return lastNode;
}

void Tries::autoComplete(const string word)
{
    vector<string> words{};

    Node *lastNode = findLastCharacterNode(word);

    if (lastNode == nullptr)
        return;

    preOrderTraversal(lastNode, word, words);

    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;
}
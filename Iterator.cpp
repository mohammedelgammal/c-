#include "Iterator"

ListIterator::ListIterator(BrowserHistory *history) : history{history} {}

void ListIterator::next()
{
    this->history->_list.at(index++);
}

bool ListIterator::hasNext()
{
    return index < this->history->_list.size();
}

string ListIterator::getCurrent()
{
    return this->history->_list.at(index);
}

void BrowserHistory::add(const string content)
{
    this->_list.push_back(content);
}

string BrowserHistory::pop()
{
    string lastItem = _list.back();
    _list.pop_back();
    return lastItem;
}

ListIterator *BrowserHistory::getIterator(BrowserHistory *history) const
{
    return new ListIterator(history);
};

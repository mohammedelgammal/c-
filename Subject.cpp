#include "Subject.hpp"

void DataSource::registerObserver(Observer *observer)
{
    _observers.push_back(observer);
}

void DataSource::notifyAll()
{
    for (Observer *observer : _observers)
        observer->update(_content);
}

void DataSource::setContent(const string content)
{
    _content = content;
    notifyAll();
}

string DataSource::getContent()
{
    return _content;
}
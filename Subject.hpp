#ifndef SUBJECT
#define SUBJECT

#include <vector>
#include "Observer.hpp"

using namespace std;

class Subject
{
public:
    virtual void registerObserver(Observer *observer){};
    virtual void notifyAll(){};
};

class DataSource : public Subject
{
public:
    void registerObserver(Observer *observer) override;
    string getContent();
    void setContent(const string content);

private:
    vector<Observer *> _observers;
    string _content;
    void notifyAll() override;
};

#endif // SUBJECT
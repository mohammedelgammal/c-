#ifndef HANDLERS
#define HANDLERS

#include <iostream>
#include <string>

using namespace std;

enum Priority
{
    SEVERE,
    MEDIUM,
    LOW
};

struct Request
{
public:
    Request(Priority priority)
    {
        this->priority = priority;
    }
    Priority getPriority()
    {
        return this->priority;
    }

private:
    Priority priority;
};

class Handler
{
public:
    virtual void setNextHandler(Handler *nextHandler){};
    virtual void handleRequest(Request *request){};
};

class LevelOneHandler : public Handler
{
public:
    LevelOneHandler() : nextHandler{nullptr} {}
    void setNextHandler(Handler *nextHandler) override;
    void handleRequest(Request *request) override;

private:
    Handler *nextHandler;
};

class LevelTwoHandler : public Handler
{
public:
    LevelTwoHandler() : nextHandler{nullptr} {}
    void setNextHandler(Handler *nextHandler) override;
    void handleRequest(Request *request) override;

private:
    Handler *nextHandler;
};

#endif // HANDLERS
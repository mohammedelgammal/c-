#include "Handlers.hpp"

void LevelOneHandler::setNextHandler(Handler *nextHandler)
{
    this->nextHandler = nextHandler;
}

void LevelOneHandler::handleRequest(Request *request)
{
    cout << "Level one handled" << endl;
    if (nextHandler)
        nextHandler->handleRequest(request);
}

void LevelTwoHandler::setNextHandler(Handler *nextHandler)
{
    this->nextHandler = nextHandler;
}

void LevelTwoHandler::handleRequest(Request *request)
{
    cout << "Second level handled" << endl;
    if (nextHandler)
        nextHandler->handleRequest(request);
}
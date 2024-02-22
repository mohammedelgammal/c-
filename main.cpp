// Libraries
#include <iostream>

#include "Handlers.hpp"
using namespace std;

int main()
{
    LevelOneHandler handler = LevelOneHandler();
    LevelTwoHandler handlerTwo = LevelTwoHandler();
    Request request = Request(SEVERE);

    handler.setNextHandler(&handlerTwo);

    handler.handleRequest(&request);

    return 0;
}
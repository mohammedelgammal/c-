// Libraries
#include <iostream>

using namespace std;

#include "Decorator.hpp"

int main()
{
    Stream *stream = new EncryptedStream(new CloudStream());

    stream->write("stream content");

    return 0;
}
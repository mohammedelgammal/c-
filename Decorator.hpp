#ifndef DECORATOR
#define DECORATOR

#include <iostream>
#include <string>

using namespace std;

class Stream
{
public:
    virtual void write(const string content){};
};

class CloudStream : public Stream
{
public:
    void write(const string content);
};

class EncryptedStream : public Stream
{
public:
    EncryptedStream(Stream *stream) : stream{stream} {};
    void write(const string content) override;
    void encrypt();

private:
    Stream *stream;
};

class CompressedStream : public Stream
{
public:
    CompressedStream(Stream *stream) : stream{stream} {};
    void write(const string content) override;
    void compress();

private:
    Stream *stream;
};

#endif // DECORATOR
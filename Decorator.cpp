#include "Decorator.hpp"

void CloudStream::write(const string content)
{
    cout << content << endl;
}

void EncryptedStream::write(const string content)
{
    encrypt();
    stream->write(content);
}

void EncryptedStream::encrypt()
{
    cout << "Encrypt stream" << endl;
}

void CompressedStream::write(const string content)
{
    compress();
    write(content);
}

void CompressedStream::compress()
{
    cout << "Compressed stream" << endl;
}

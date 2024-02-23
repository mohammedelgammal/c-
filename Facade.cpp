#include <iostream>

using namespace std;

class Connection
{
public:
    void disconnect()
    {
        cout << "Server disconnected..." << endl;
    }
};

class AuthToken
{
private:
    string appId;
    string key;
};

class Message
{
public:
    Message(const string content) : content{content} {};

private:
    string content;
};

class NotificationServer
{
public:
    Connection *connect()
    {
        cout << "Connected to server..." << endl;
        return new Connection();
    };
    AuthToken *authenticate(string appId, string key)
    {
        cout << "Authenticated..." << endl;
        return new AuthToken();
    };
    void send(Message *message, AuthToken *token, string target)
    {
        cout << "Sending message..." << endl;
    }
};

class NotificationService
{
public:
    void send(const string message, const string target)
    {
        NotificationServer *server = new NotificationServer();
        Message *serverMessage = new Message(message);
        Connection *connection = server->connect();
        AuthToken *token = server->authenticate("appId", "key");
        server->send(serverMessage, token, target);
        connection->disconnect();
    };
};
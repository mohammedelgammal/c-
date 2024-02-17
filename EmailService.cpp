#include "EmailService"

void EmailService::sendEmail(const string email) const
{
    connect();
    authenticate();
    // send Email
    disconnect();
}

void EmailService::connect() const
{
    cout << "Connected..." << endl;
}
void EmailService::authenticate() const
{
    cout << "Authenticated..." << endl;
}
void EmailService::disconnect() const
{
    cout << "Email was sent & Disconnected..." << endl;
}
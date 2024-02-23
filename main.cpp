// Libraries
#include <iostream>

using namespace std;

#include "Facade.cpp"

int main()
{
    NotificationService service = NotificationService();

    service.send("new Message", "target");

    return 0;
}
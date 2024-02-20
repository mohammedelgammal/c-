// Libraries
#include <iostream>
#include "Command.hpp"

using namespace std;

int main()
{
    RemoteControl *rc = new RemoteControl();
    VolumeUpCommand *volUp = new VolumeUpCommand(rc);
    Button *btn = new Button(volUp);

    btn->click();
    btn->click();

    cout << rc->getVolume() << endl;

    return 0;
}
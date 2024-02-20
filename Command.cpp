#include "Command.hpp"

Button::Button(Command *command) : command{command}
{
}

void Button::click()
{
    command->execute();
}

void RemoteControl::volumeUp()
{
    volume++;
}

int RemoteControl::getVolume()
{
    return volume;
}

VolumeUpCommand::VolumeUpCommand(RemoteControl *rc) : rc{rc} {}

void VolumeUpCommand::execute()
{
    rc->volumeUp();
}

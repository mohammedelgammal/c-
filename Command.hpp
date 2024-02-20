#ifndef COMMAND
#define COMMAND

class Command
{
public:
    virtual void execute(){};
};

class Button
{
public:
    Button(Command *command);
    void click();

private:
    Command *command;
};

class RemoteControl
{
public:
    void volumeUp();
    int getVolume();

private:
    int volume = 0;
};

class VolumeUpCommand : public Command
{
public:
    VolumeUpCommand(RemoteControl *rc);
    void execute() override;

private:
    RemoteControl *rc;
};

#endif // COMMAND
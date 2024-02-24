#include <iostream>
#include <unordered_map>

using namespace std;

class Singleton
{
public:
    int getLog(const string key)
    {
        return logs[key];
    }
    void setLog(const string key, const int value)
    {
        logs[key] = value;
    }
    static Singleton *getInstance()
    {
        if (instance->logs.empty())
            Singleton();
        return instance;
    }

private:
    Singleton()
    {
        instance = new Singleton();
    }
    static Singleton *instance;
    unordered_map<string, int> logs;
};
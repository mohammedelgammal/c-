#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

enum PlayerType
{
    COUNTER_TERRORIST,
    TERRORIST
};
vector<string> weaponsArr = {
    "AK_47",
    "NIGHT_EAGLE",
    "KNIFE_GUT",
    "MAVERICK",
};
vector<PlayerType> types = {COUNTER_TERRORIST, TERRORIST};

class Player
{
public:
    virtual void assignWeapon(const string assignedWeapon){};
    virtual void mission(){};
};

class Terrorist : public Player
{
public:
    Terrorist() : task{"Plant a BOMB!"} {};
    void assignWeapon(const string assignedWeapon) override
    {
        weapon = assignedWeapon;
    }
    void mission() override
    {
        cout << "Terrorist with weapon " << weapon << " | "
             << "Task is: " << task;
    }

private:
    const string task;
    string weapon;
};

class CounterTerrorist : public Player
{
public:
    CounterTerrorist() : task{"Diffuse a BOMB!"} {};
    void assignWeapon(const string assignedWeapon) override
    {
        weapon = assignedWeapon;
    }
    void mission() override
    {
        cout << "CounterTerrorist with weapon " << weapon << " | "
             << "Task is: " << task;
    }

private:
    const string task;
    string weapon;
};

class PlayerFactory
{
public:
    Player getPlayers(const PlayerType playerType)
    {
        if (!cachedPlayers.contains(playerType))
        {
            if (playerType == COUNTER_TERRORIST)
                cachedPlayers[playerType] = CounterTerrorist();
            else
                cachedPlayers[playerType] = Terrorist();
        }
        return cachedPlayers[playerType];
    }

private:
    unordered_map<PlayerType, Player> cachedPlayers;
};

class CounterStrike
{
public:
    CounterStrike() : factory{PlayerFactory()} {}
    void launchGame(const int playersNum)
    {
        for (int i = 0; i < playersNum; i++)
        {
            Player player = factory.getPlayers(getRandType());
            player.assignWeapon(getRandWeapon());
            player.mission();
        }
    }

private:
    PlayerFactory factory;
    PlayerType getRandType()
    {
        return types[rand() % 2];
    }
    string getRandWeapon()
    {
        return weaponsArr[rand() % 4];
    }
};
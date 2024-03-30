#pragma once

#include <vector>
#include "String.h"

class Entity {
public:
    Entity(String name, int id);
    String getName() const;
    int getId() const;

private:
    String name;
    int id;
};

class Player : public Entity {
public:
    Player(String name, int id, int age, String teamName);
    String getTeamName() const;
    int getAge() const;
private :
    int age;
    String teamName;
};

class PlayerDatabase {
public:
    bool insertPlayer(const Player& player);
    bool updatePlayer(int playerId, const Player& updatedPlayer);
    bool deletePlayer(int playerId);
    void printPlayers() const;

private:
    std::vector<Player> players;
};

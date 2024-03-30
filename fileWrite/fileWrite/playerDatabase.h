#pragma once

#include <vector>
#include <string>

/*class Entity {
public:
    Entity(std::string name, int id, int age,std::string teamName);
    std::string getName() const;
    std::string getTeamName() const;
    int getId() const;
    int getAge() const;

private:
    std::string name;
    std::string teamName;
    int id;
    int age;
};

class Player : public Entity {
public:
    Player(std::string name, int id, int age,std::string teamName);
};

class PlayerDatabase {
public:
    void insertPlayer(const Player& player);
    void updatePlayer(int playerId, const Player& updatedPlayer);
    void deletePlayer(int playerId);
    void printPlayers() const;

private:
    std::vector<Player> players;
};
*/



class Entity {
public:
    Entity(const String& name, int id, int age, const String& teamName);
    String getName() const;
    String getTeamName() const;
    int getId() const;
    int getAge() const;

private:
    String name;
    String teamName;
    int id;
    int age;
};

class Player : public Entity {
public:
    Player(const String& name, int id, int age, const String& teamName);
};

class PlayerDatabase {
public:
    void insertPlayer(const Player& player);
    void updatePlayer(int playerId, const Player& updatedPlayer);
    void deletePlayer(int playerId);
    void printPlayers() const;

private:
    std::vector<Player> players;
};

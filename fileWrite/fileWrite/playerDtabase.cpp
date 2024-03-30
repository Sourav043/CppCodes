/*#include "playerdatabase.h"
#include <iostream>
#include<fstream>
std::ofstream ot("player.txt");

Entity::Entity(std::string name, int id, int age, std::string teamName)
    : name(name), id(id), age(age), teamName(teamName) {}

std::string Entity::getName() const {
    return name;
}

std::string Entity::getTeamName() const
{
    return teamName;
}

int Entity::getId() const {
    return id;
}

int Entity::getAge() const {
    return age;
}

Player::Player(std::string name, int id, int age,std::string teamName)
    : Entity(name, id, age,teamName) {}

void PlayerDatabase::insertPlayer(const Player& player) {
    players.push_back(player);
}

void PlayerDatabase::updatePlayer(int playerId, const Player& updatedPlayer) {
    for (Player& player : players) {
        if (player.getId() == playerId) {
            player = updatedPlayer;
            return;
        }
    }
}

void PlayerDatabase::deletePlayer(int playerId) {
    for (auto it = players.begin(); it != players.end(); ++it) {
        if (it->getId() == playerId) {
            players.erase(it);
            return;
        }
    }
}

void PlayerDatabase::printPlayers() const {
    for (const Player& player : players) {
        std::cout << "Name: " << player.getName() << ", ID: " << player.getId() << ", Age: " << player.getAge()<<", TeamName: "<<player.getTeamName() << std::endl;
        ot << "Name: " << player.getName() << ", ID: " << player.getId() << ", Age: " << player.getAge() << ", TeamName: " << player.getTeamName() << std::endl;
    }
}
*/

#include "playerdatabase.h"
#include <iostream>
#include "string.h"  // Assuming your String class is defined in a file called "String.h"

std::ofstream ot("player.txt");

Entity::Entity(const String& name, int id, int age, const String& teamName)
    : name(name), id(id), age(age), teamName(teamName) {}

String Entity::getName() const {
    return name;
}

String Entity::getTeamName() const {
    return teamName;
}

int Entity::getId() const {
    return id;
}

int Entity::getAge() const {
    return age;
}

Player::Player(const String& name, int id, int age, const String& teamName)
    : Entity(name, id, age, teamName) {}

void PlayerDatabase::insertPlayer(const Player& player) {
    players.push_back(player);
}

void PlayerDatabase::updatePlayer(int playerId, const Player& updatedPlayer) {
    for (Player& player : players) {
        if (player.getId() == playerId) {
            player = updatedPlayer;
            return;
        }
    }
}

void PlayerDatabase::deletePlayer(int playerId) {
    for (auto it = players.begin(); it != players.end(); ++it) {
        if (it->getId() == playerId) {
            players.erase(it);
            return;
        }
    }
}

void PlayerDatabase::printPlayers() const {
    for (const Player& player : players) {
        std::cout << "Name: " << player.getName().display() << ", ID: " << player.getId() << ", Age: " << player.getAge() << ", TeamName: " << player.getTeamName().display() << std::endl;
        ot << "Name: " << player.getName().display() << ", ID: " << player.getId() << ", Age: " << player.getAge() << ", TeamName: " << player.getTeamName().display() << std::endl;
    }
}


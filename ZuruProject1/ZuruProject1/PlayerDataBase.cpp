#include "PlayerDatabase.h"
#include "String.h"
#include <iostream>
#include "Date.h"
#include<fstream>
std::ofstream player_txt("player.txt", std::ofstream::out | std::ofstream::app);

Entity::Entity(String name, int id)
    : name(name), id(id){}

String Entity::getName() const {
    return name;
}

int Entity::getId() const {
    return id;
}

Player::Player(String name, int id, int age, String teamName)
    : Entity(name, id) {
    this->age = age;
    this->teamName = teamName;
}

int Player::getAge() const {
    return age;
}

String Player::getTeamName() const
{
    return teamName;
}

bool PlayerDatabase::insertPlayer(const Player& player) {
    Date currTime{};
    for (Player& play : players) {
        if (player.getId() == play.getId()) {
            std::cout << "Player Id Already Exists\n";
            return false;
        }
    }
    players.push_back(player);
    player_txt << "[Inserted at " << currTime.toString() << "] " << "Name: " << player.getName().getString() << ", ID: " << player.getId() << ", Age: " << player.getAge() << ", TeamName: " << player.getTeamName().getString() << std::endl;
    return true;
}

bool PlayerDatabase::updatePlayer(int playerId, const Player& updatedPlayer) {
    Date currTime{};
    bool flag = 0;
    for (Player& player : players) {
        if (player.getId() == playerId) {
            flag = 1;
            player = updatedPlayer;
            player_txt << "[Updated at " << currTime.toString() << "] " << "Name: " << player.getName().getString() << ", ID: " << player.getId() << ", Age: " << player.getAge() << ", TeamName: " << player.getTeamName().getString() << std::endl;
            return flag;
        }
    }
    std::cout << "Player Id Does Not Exist\n";
    return flag;
}

bool PlayerDatabase::deletePlayer(int playerId) {
    Date currTime{};
    for (auto it = players.begin(); it != players.end(); ++it) {
        if (it->getId() == playerId) {
            player_txt << "[Deleted at " << currTime.toString() << "] " << "Player Id No: " <<playerId<<" is Deleted From Database" << std::endl;
            players.erase(it);
            return true;
        }
    }
    std::cout << "Player Id Does not Exist\n";
    return false;
}

void PlayerDatabase::printPlayers() const {
    Date currTime{};
    if (players.size() == 0) {  //check database is empty or not 
        std::cout << "DataBase is Empty\n";
    }
    else {
        for (const Player& player : players) {
            std::cout << "Name: " << player.getName().getString() << ", ID: " << player.getId() << ", Age: " << player.getAge() << ", TeamName: " << player.getTeamName().getString() << std::endl;
        }
    }
}
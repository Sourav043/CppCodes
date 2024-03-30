#include<iostream>
#include<fstream>
#include "playerdatabase.h"
#include "string.h"
std::ofstream out("sample.txt");
int main() {

	
	if (!out) {
		std::cout << "Sorry this file can't Open";
	}
	out << "Ok Fine";

    /*PlayerDatabase database;
    int choice;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Insert Player\n";
        std::cout << "2. Update Player\n";
        std::cout << "3. Delete Player\n";
        std::cout << "4. Print Players\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string name;
            std::string teamName;
            int id, age;
            std::cout << "Enter Player Name: ";
            std::cin >> name;
            std::cout << "Enter Player ID: ";
            std::cin >> id;
            std::cout << "Enter Player Age: ";
            std::cin >> age;
            std::cout << "Enter Team Name: ";
            std::cin >> teamName;
            Player player(name, id, age,teamName);
            database.insertPlayer(player);
        }
        else if (choice == 2) {
            int playerId, age;
            std::string name;
            std::string teamName;
            std::cout << "Enter Player ID to Update: ";
            std::cin >> playerId;
            std::cout << "Enter New Name: ";
            std::cin >> name;
            std::cout << "Enter New Age: ";
            std::cin >> age;
            std::cout << "Enter Team Name: ";
            std::cin >> teamName;
            Player updatedPlayer(name, playerId, age,teamName);
            database.updatePlayer(playerId, updatedPlayer);
        }
        else if (choice == 3) {
            int playerId;
            std::cout << "Enter Player ID to Delete: ";
            std::cin >> playerId;
            database.deletePlayer(playerId);
        }
        else if (choice == 4) {
            std::cout << "Players in the database:" << std::endl;
            database.printPlayers();
        }
        else if (choice == 5) {
            break;
        }
        else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
    
    
    
    */
    PlayerDatabase database;
    int choice;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Insert Player\n";
        std::cout << "2. Update Player\n";
        std::cout << "3. Delete Player\n";
        std::cout << "4. Print Players\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            String name;
            String teamName;
            int id, age;
            std::cout << "Enter Player Name: ";
            std::cin >> name;
            std::cout << "Enter Player ID: ";
            std::cin >> id;
            std::cout << "Enter Player Age: ";
            std::cin >> age;
            std::cout << "Enter Team Name: ";
            std::cin >> teamName;
            Player player(name, id, age, teamName);
            database.insertPlayer(player);
        }
        else if (choice == 2) {
            int playerId, age;
            String name;
            String teamName;
            std::cout << "Enter Player ID to Update: ";
            std::cin >> playerId;
            std::cout << "Enter New Name: ";
            std::cin >> name;
            std::cout << "Enter New Age: ";
            std::cin >> age;
            std::cout << "Enter Team Name: ";
            std::cin >> teamName;
            Player updatedPlayer(name, playerId, age, teamName);
            database.updatePlayer(playerId, updatedPlayer);
        }
        else if (choice == 3) {
            int playerId;
            std::cout << "Enter Player ID to Delete: ";
            std::cin >> playerId;
            database.deletePlayer(playerId);
        }
        else if (choice == 4) {
            std::cout << "Players in the database:" << std::endl;
            database.printPlayers();
        }
        else if (choice == 5) {
            break;
        }
        else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
    
    
	return 0;
}
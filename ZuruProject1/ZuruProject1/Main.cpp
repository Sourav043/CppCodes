#include <iostream>
#include "Log.h"
#include "Date.h"
#include "String.h"
#include "PlayerDatabase.h"
#include "Timer.h"

int main()
{
    Log log{};
    String info{ "Log In" };
    log.Info(info);
    //Log
    {
        Timer T1{};
        log.SetLogLevel(Log::Level::LevelError);
        String warn{ "Carefull!" };
        log.Warn(warn);
        String error{ "Stop!" };
        log.Error(error);
        std::cout << "Log Class Time : ";
    }
   
    //Date
    {
        Date currentDate{};
        Timer T2{};
        currentDate.setDay(24);
        currentDate.setMonth(8);
        currentDate.setYear(2023);
        currentDate.Display();
        Date newDate = currentDate + 100;
        std::cout << "NewDate\n";
        newDate.Display();
        std::cout << "Date Class Time : ";
    }

    //String 
    {
        Timer T3{};
        String s1{ "Hello " };
        String s2 = { "Rahul" };
        String s3 = s1 + s2;
        std::cout << "Operator Overloading Here\n";
        s3.display();

        String str{ "Modern C++" };
        StringFirst first{ "Sourav" };
        StringLast last{ "Sarkar" };

        std::cout<<str.display()<<std::endl;
        std::cout << first.display() << std::endl;
        std::cout << last.display() << std::endl;
        std::cout << "String Class Time : ";
    }
    //Player Database
    {
        Timer T4{};
        PlayerDatabase database;
        int choice{};
        bool flag{true};
        while (flag) {
            std::cout << "\nMenu:\n";
            std::cout << "1. Insert Player\n";
            std::cout << "2. Update Player\n";
            std::cout << "3. Delete Player\n";
            std::cout << "4. Print Players\n";
            std::cout << "5. Exit\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;
            switch (choice) {
            case  1 : {
                    String name;
                    String teamName;
                    int id{}, age{};
                    std::cout << "Enter Player Name: ";
                    std::cin >> name;
                    std::cout << "Enter Player ID: ";
                    std::cin >> id;
                    std::cout << "Enter Player Age: ";
                    std::cin >> age;
                    std::cout << "Enter Team Name: ";
                    std::cin >> teamName;
                    Player player(name, id, age, teamName);
                    if (database.insertPlayer(player)) {    //Check Given Id is Already Exists in Database or Not
                        String info{ "Player Data Inserted" };
                        log.Info(info);
                    }
                    break;
                }
            case 2:{
                int playerId{}, age{};
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
                    if (database.updatePlayer(playerId, updatedPlayer)) {       //Check Given Id is Present in Database or Not
                        String info{ "Player Data Updated" };
                        log.Info(info);
                    }
                    break;
                }
            case 3:{
                int playerId{};
                    std::cout << "Enter Player ID to Delete: ";
                    std::cin >> playerId;
                    if (database.deletePlayer(playerId)) {          //Check Given Id is Present in Database or Not
                        String info{ "Player Data Deleted" };
                        log.Info(info);
                    }
                    break;
                }
            case 4:{
                    std::cout << "Players in the database:" << std::endl;
                    database.printPlayers();
                    break;
                }
            case 5:{
                    String info{ "Log Out" };
                    log.Info(info);
                    flag=false;
                    break;
                }
            default:{
                    std::cout << "Invalid choice. Please try again." << std::endl;
                }
            }
        }
        std::cout << "Player Database Time: ";
    }
    std::cin.get();

}
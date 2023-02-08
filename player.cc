#include <iostream>
#include "player.h"
#include "dealer.h"

int Player::PlayerCount(){

    try {
        std::cout << std::endl;
        std::cout << "How many people do you want to play?" << std::endl;
        std::cin >> numOfPlayers;
    
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Not a valid input. Please enter a number 1-8." << std::endl;
            throw 98;
        }
        else if (numOfPlayers < 1 || numOfPlayers > 8){
            std::cout << "Not a valid number of people. Please choose a number 1-8." << std::endl;
            throw 98;
        }
        else {
            std::cout << std::endl;
            std::cout << "You have chossen to play against " << numOfPlayers << " people!" << std::endl;
            std::cout << std::endl;
            std::cout << "\tGood Luck!!" << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
        }
    }
    catch (int i){
        if (i == 98){
            PlayerCount();
        }
    }

    return numOfPlayers;
}



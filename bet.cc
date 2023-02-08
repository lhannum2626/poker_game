#include <iostream>
#include "bet.h"


int Bet::GetPlayerChips(){

    try{
        int numOfChips;
        std::cout << "How many chips would you like to buy in for:" << std::endl;
        std::cin >> numOfChips;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Not a valid input. Please enter a number greater than 0." << std::endl;
            throw 98;
        }
        else if (numOfChips < 0){
            std::cout << "Not a valid number of chips, must be greater than 0." << std::endl;
            throw 98;
        }
        else if (numOfChips > 1000000){
            numOfChips = 1000000;
            std::cout << "Too many chips you will play with the max number of chips: $" << numOfChips << std::endl;
            return numOfChips;
        }
        else {
            return numOfChips;
        }
    }
    catch(int i){
        if (i == 98){
            GetPlayerChips();
        }
    }
}

int Bet::Raise(int playerChipTotal, int currentBet, int bigBlind){

    
    try{
        int raiseAmount = 0;
        std::cout << "Current Bet is : $" << currentBet << ". How much would you like to Raise:" << std::endl;
        std::cin >> raiseAmount;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Not a valid input. Please enter a number less than your chip total." << std::endl;
            throw 98;
        }
        else if (raiseAmount < bigBlind || raiseAmount > playerChipTotal){
            std::cout << "Not a valid amount of money. Please enter a number that is larger than the big blind and smaller than your chip total." << std::endl;
            throw 98;
        }
        else {
            std::cout << "You have chossen to raise: $" << raiseAmount << std::endl;
            std::cout << std::endl;
            return raiseAmount;
        }
    }
    catch (int i){
        if (i == 98){
            Raise(playerChipTotal, currentBet, bigBlind);
        }
    }
    
}

int Bet::Call(int playerChipTotal, int currentBet){

    int callAmount = 0;
    std::cout << "You choose to call at: $" << currentBet << std::endl;
    callAmount = currentBet;
    return callAmount;
    
}

void Bet::Fold(){

    std::cout << "You have folded your hand." << std::endl;

}

void Bet::Check(){

    std::cout << "You have checked." << std::endl;

}

void Bet::PrintPlayerChips(int playerChipTotal){

    std::cout << "You have: $" << playerChipTotal << " in chips." << std::endl;
    std::cout << std::endl;

}

char Bet::GetPlayerMove(int currentBet){

    try{
        char playerChoice;
        std::cout << "It is your turn. Would you like to:" << std::endl;
            if (currentBet > 0) {
                std::cout << "Raise (R)" << std::endl;
                std::cout << "Call (C)" << std::endl;
                std::cout << "Fold (F)" << std::endl;
                std::cin >> playerChoice;
                if (std::cin.fail() || !playerChoice == 'R' || !playerChoice == 'C' || !playerChoice == 'F' || !playerChoice == 'r' || !playerChoice == 'c' || !playerChoice == 'f'){
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                    std::cout << "Not a valid input. Please enter a letter (R)(C)(F)." << std::endl;
                    throw 98;
                }
                if (playerChoice = 'R'){
                    playerChoice = 'r';
                }
                else if (playerChoice = 'C'){
                    playerChoice = 'c';
                }
                else if (playerChoice = 'F'){
                    playerChoice = 'f';
                }
                return playerChoice;
            }
            if (currentBet == 0) {
                std::cout << "Raise (R)" << std::endl;
                std::cout << "Check (E)" << std::endl;
                std::cout << "Fold (F)" << std::endl;
                std::cin >> playerChoice;
                if (std::cin.fail() || !playerChoice == 'R' || !playerChoice == 'E' || !playerChoice == 'F' || !playerChoice == 'r' || !playerChoice == 'e' || !playerChoice == 'f'){
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                    std::cout << "Not a valid input. Please enter a letter (R)(C)(F)." << std::endl;
                    throw 98;
                }
                if (playerChoice = 'R'){
                    playerChoice = 'r';
                }
                else if (playerChoice = 'E'){
                    playerChoice = 'e';
                }
                else if (playerChoice = 'F'){
                    playerChoice = 'f';
                }
                return playerChoice;
            }
    }
    catch (int i){
        if (i == 98){
            GetPlayerMove(currentBet);
        }
    }
    
}

int Bet::ExectuePlayerMove(char playerMove, int playerChipTotal, int currentBet, int bigBlind){

    int bettedAmount = 0;
    int raisedChips = 0;
    if (playerMove == 'r'){
        bettedAmount = Raise(playerChipTotal, currentBet, bigBlind);
    }
    else if (playerMove == 'c'){
        bettedAmount = Call(playerChipTotal, currentBet);
    }
    else if (playerMove == 'e'){
        Check();
        bettedAmount = 0;
    }
    else if (playerMove == 'f'){
        Fold();
        bettedAmount = -1;
    }
    return bettedAmount;

}

int Bet::CalculatePlayerChips(int playerChipTotal, int totalPot, bool handResult, int bettedAmount){

    // If the player wins the hand
    if (handResult == true){
        playerChipTotal += totalPot;
    }
    // The player folds or loses the hand
    else if (handResult == false){
        playerChipTotal -= bettedAmount;
    }

    return playerChipTotal;
}
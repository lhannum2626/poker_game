#include <iostream>
#include "table.h"

int Table::GetBigBlind(int playerChips){

    try{
        std::cout << "What would you like the big blind to be set at?" << std::endl;
        std::cin >> bBlind;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Not a valid input please enter a number." << std::endl;
            throw 98;
        }
        else if (bBlind > playerChips / 100){
            std::cout << "The Big blind is too big." << std::endl;
            throw 97;
        }
        else if (bBlind < 1){
            std::cout << "The big blind is too low enter a number greater than 1." << std::endl;
            throw 96;
        }
        else {
            return bBlind;
        }
    }
    catch (int i){
        if (i == 98 || i == 97 || i == 96){
            GetBigBlind(playerChips);
        }
    }
}

int Table::CalculateSmallBlind(int bBlind){

    sBlind = bBlind / 2;
    return sBlind;
}

void Table::PrintBlinds(int sBlind, int bBlind){

    std::cout << "The blinds are set at:" << std::endl;
    std::cout << "$" << sBlind << " Small Blind" << std::endl;
    std::cout << "$" << bBlind << " Big Blind" << std::endl;
    std::cout << std::endl;

}
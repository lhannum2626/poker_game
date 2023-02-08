#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>

class Deck {

    private:

        int totalCards = 52;
        int numbers = 13;
        int suits = 4;
        std::string deck[52];
        std::string number[13] = {"Ace" , "2" , "3" , "4" , "5" , "6" , "7" , "8" , "9" , "10" , "Jack" , "Queen" , "King"};
        std::string suit[4] = {" Spade" , " Heart" , " Diamond" , " Club"};


    public: 

        void CreateDeck(std::string deck[52]);
        void PrintDeck(std::string deck[52]);

};


#endif
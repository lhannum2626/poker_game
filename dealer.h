#ifndef DEALER_H
#define DEALER_H

#include <iostream>
#include <cstdlib>

class Dealer {

    public:
        std::string playersCards[2];
        std::string player1Cards[2];
        std::string player2Cards[2];
        std::string player3Cards[2];
        std::string player4Cards[2];
        std::string player5Cards[2];
        std::string player6Cards[2];
        std::string player7Cards[2];
        std::string player8Cards[2];
        std::string flop[3];
        std::string turn;
        std::string river;

        void ShuffleDeck(std::string deck[52]);    
        void DealCards(std::string shuffledDeck[52], int numOfPeople);
        void ShowPlayerHand(std::string shuffledDeck[52], int numOfPeople);
        void Flop(std::string shuffledDeck[52], int numOfPeople);
        void Turn(std::string shuffledDeck[52], int numOfPeople);
        void River(std::string shuffledDeck[52], int numOfPeople);
};


#endif
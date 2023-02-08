#include <iostream>
#include "deck.h"


void Deck::CreateDeck(std::string deck[52]){

    for (int i = 0; i < totalCards; i ++){
        if (i < 13){
            deck[i] = number[i] + suit[0];
        }
        else if (i < 26) {
            deck[i] = number[i % numbers] + suit[1];
        }
        else if (i < 39) {
            deck[i] = number[i % numbers] + suit[2];
        }
        else{
            deck[i] = number[i % numbers] + suit[3];
        }
    }

}


void Deck::PrintDeck(std::string deck[52]) {

    for (int i = 0; i < 52; i++){
            std::cout << deck[i] << std::endl;
    }

}
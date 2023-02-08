#include <iostream>
#include "deck.h"
#include "dealer.h"
#include "player.h"
#include "bet.h"
#include "table.h"

int main(){

    Deck card;
    Dealer deal;
    Player player;
    Bet bet;
    Table table;

    int playerCount = 0; // Initilizing Amount of Players
    int playerChipTotal = 2000; //Chips to start the game.
    int bigBlind = 0; // Initilizing Big Blinds
    int smallBlind = 0; // Initilizing Small Blinds
    int raiseAmount = 0; // Initilizing Raise Amount

    // Creating a deck of cards
    std::string playingCards[52];
    card.CreateDeck(playingCards);

    playerCount = player.PlayerCount();
    std::cout << playerCount << std::endl;
    std::cout << std::endl;

    table.GetBigBlind(playerChipTotal);

    deal.ShuffleDeck(playingCards);

    deal.ShowPlayerHand(playingCards, playerCount);

    deal.Flop(playingCards, playerCount);

    deal.Turn(playingCards, playerCount);

    deal.River(playingCards,playerCount);

    bet.PrintPlayerChips(playerChipTotal);


    return 0;
}
#include <iostream>
#include "dealer.h"
#include "table.h"

void Dealer::ShuffleDeck(std::string deck[52]){
        srand((unsigned) time(NULL));

    for (int i = 0; i < 52; i++){
        int random = rand() % 52;
        std::swap(deck[i], deck[random]);
    }

}

void Dealer::DealCards(std::string shuffledDeck[52], int numOfPeople){

    switch (numOfPeople){
        case 1:
            playersCards[0] = shuffledDeck[0];
            player1Cards[0] = shuffledDeck[1];
            playersCards[1] = shuffledDeck[2];
            player1Cards[1] = shuffledDeck[3];
        break;
        case 2:
            playersCards[0] = shuffledDeck[0];
            player1Cards[0] = shuffledDeck[1];
            player2Cards[0] = shuffledDeck[2];
            playersCards[1] = shuffledDeck[3];
            player1Cards[1] = shuffledDeck[4];
            player2Cards[1] = shuffledDeck[5];
        break;
        case 3:
            playersCards[0] = shuffledDeck[0];
            player1Cards[0] = shuffledDeck[1];
            player2Cards[0] = shuffledDeck[2];
            player3Cards[0] = shuffledDeck[3];
            playersCards[1] = shuffledDeck[4];
            player1Cards[1] = shuffledDeck[5];
            player2Cards[1] = shuffledDeck[6];
            player3Cards[1] = shuffledDeck[7];
        break;
        case 4:
            playersCards[0] = shuffledDeck[0];
            player1Cards[0] = shuffledDeck[1];
            player2Cards[0] = shuffledDeck[2];
            player3Cards[0] = shuffledDeck[3];
            player4Cards[0] = shuffledDeck[4];
            playersCards[1] = shuffledDeck[5];
            player1Cards[1] = shuffledDeck[6];
            player2Cards[1] = shuffledDeck[7];
            player3Cards[1] = shuffledDeck[8];
            player4Cards[1] = shuffledDeck[9];
        break;
        case 5:
            playersCards[0] = shuffledDeck[0];
            player1Cards[0] = shuffledDeck[1];
            player2Cards[0] = shuffledDeck[2];
            player3Cards[0] = shuffledDeck[3];
            player4Cards[0] = shuffledDeck[4];
            player5Cards[0] = shuffledDeck[5];
            playersCards[1] = shuffledDeck[6];
            player1Cards[1] = shuffledDeck[7];
            player2Cards[1] = shuffledDeck[8];
            player3Cards[1] = shuffledDeck[9];
            player4Cards[1] = shuffledDeck[10];
            player5Cards[1] = shuffledDeck[11];
        break;
        case 6:
            playersCards[0] = shuffledDeck[0];
            player1Cards[0] = shuffledDeck[1];
            player2Cards[0] = shuffledDeck[2];
            player3Cards[0] = shuffledDeck[3];
            player4Cards[0] = shuffledDeck[4];
            player5Cards[0] = shuffledDeck[5];
            player6Cards[0] = shuffledDeck[6];
            playersCards[1] = shuffledDeck[7];
            player1Cards[1] = shuffledDeck[8];
            player2Cards[1] = shuffledDeck[9];
            player3Cards[1] = shuffledDeck[10];
            player4Cards[1] = shuffledDeck[11];
            player5Cards[1] = shuffledDeck[12];
            player6Cards[1] = shuffledDeck[13];
        break;
        case 7:
            playersCards[0] = shuffledDeck[0];
            player1Cards[0] = shuffledDeck[1];
            player2Cards[0] = shuffledDeck[2];
            player3Cards[0] = shuffledDeck[3];
            player4Cards[0] = shuffledDeck[4];
            player5Cards[0] = shuffledDeck[5];
            player6Cards[0] = shuffledDeck[6];
            player7Cards[0] = shuffledDeck[7];
            playersCards[1] = shuffledDeck[8];
            player1Cards[1] = shuffledDeck[9];
            player2Cards[1] = shuffledDeck[10];
            player3Cards[1] = shuffledDeck[11];
            player4Cards[1] = shuffledDeck[12];
            player5Cards[1] = shuffledDeck[13];
            player6Cards[1] = shuffledDeck[14];
            player7Cards[1] = shuffledDeck[15];
        break;
        case 8:
            playersCards[0] = shuffledDeck[0];
            player1Cards[0] = shuffledDeck[1];
            player2Cards[0] = shuffledDeck[2];
            player3Cards[0] = shuffledDeck[3];
            player4Cards[0] = shuffledDeck[4];
            player5Cards[0] = shuffledDeck[5];
            player6Cards[0] = shuffledDeck[6];
            player7Cards[0] = shuffledDeck[7];
            player8Cards[0] = shuffledDeck[8];
            playersCards[1] = shuffledDeck[9];
            player1Cards[1] = shuffledDeck[10];
            player2Cards[1] = shuffledDeck[11];
            player3Cards[1] = shuffledDeck[12];
            player4Cards[1] = shuffledDeck[13];
            player5Cards[1] = shuffledDeck[14];
            player6Cards[1] = shuffledDeck[15];
            player7Cards[1] = shuffledDeck[16];
            player8Cards[1] = shuffledDeck[17];
        break;
    }
   
}

void Dealer::ShowPlayerHand(std::string shuffledDeck[52], int playerCount){

    std::cout << "Your hand is:" << std::endl;
    std::cout << std::endl;
    std::cout << "\t" << shuffledDeck[0] << "\t" << shuffledDeck[playerCount + 1] << std::endl;
    std::cout << std::endl;

}

void Dealer::Flop(std::string shuffledDeck[52], int numofPeople){
    
    switch (numofPeople){
        case 1:
            flop[0] = shuffledDeck[4];
            flop[1] = shuffledDeck[5];
            flop[2] = shuffledDeck[6];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << std::endl;
            std::cout << std::endl;
        break;
        case 2:
            flop[0] = shuffledDeck[6];
            flop[1] = shuffledDeck[7];
            flop[2] = shuffledDeck[8];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << std::endl;
            std::cout << std::endl;
        break;
        case 3:
            flop[0] = shuffledDeck[8];
            flop[1] = shuffledDeck[9];
            flop[2] = shuffledDeck[10];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << std::endl;
            std::cout << std::endl;
        break;
        case 4:
            flop[0] = shuffledDeck[10];
            flop[1] = shuffledDeck[11];
            flop[2] = shuffledDeck[12];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << std::endl;
            std::cout << std::endl;
        break;
        case 5:
            flop[0] = shuffledDeck[12];
            flop[1] = shuffledDeck[13];
            flop[2] = shuffledDeck[14];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << std::endl;
            std::cout << std::endl;
        break;
        case 6:
            flop[0] = shuffledDeck[14];
            flop[1] = shuffledDeck[15];
            flop[2] = shuffledDeck[16];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << std::endl;
            std::cout << std::endl;
        break;
        case 7:
            flop[0] = shuffledDeck[16];
            flop[1] = shuffledDeck[17];
            flop[2] = shuffledDeck[18];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << std::endl;
            std::cout << std::endl;
        break;
        case 8:
            flop[0] = shuffledDeck[18];
            flop[1] = shuffledDeck[19];
            flop[2] = shuffledDeck[20];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << std::endl;
            std::cout << std::endl;
        break;
    }
   
}

void Dealer::Turn(std::string shuffledDeck[52], int numofPeople){

    switch (numofPeople){
        case 1:
            flop[0] = shuffledDeck[4];
            flop[1] = shuffledDeck[5];
            flop[2] = shuffledDeck[6];
            turn = shuffledDeck[7];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << std::endl;
            std::cout << std::endl;
        break;
        case 2:
            flop[0] = shuffledDeck[6];
            flop[1] = shuffledDeck[7];
            flop[2] = shuffledDeck[8];
            turn = shuffledDeck[9];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << std::endl;
            std::cout << std::endl;
        break;
        case 3:
            flop[0] = shuffledDeck[8];
            flop[1] = shuffledDeck[9];
            flop[2] = shuffledDeck[10];
            turn = shuffledDeck[11];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << std::endl;
            std::cout << std::endl;
        break;
        case 4:
            flop[0] = shuffledDeck[10];
            flop[1] = shuffledDeck[11];
            flop[2] = shuffledDeck[12];
            turn = shuffledDeck[13];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << std::endl;
            std::cout << std::endl;
        break;
        case 5:
            flop[0] = shuffledDeck[12];
            flop[1] = shuffledDeck[13];
            flop[2] = shuffledDeck[14];
            turn = shuffledDeck[15];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << std::endl;
            std::cout << std::endl;
        break;
        case 6:
            flop[0] = shuffledDeck[14];
            flop[1] = shuffledDeck[15];
            flop[2] = shuffledDeck[16];
            turn = shuffledDeck[17];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << std::endl;
            std::cout << std::endl;
        break;
        case 7:
            flop[0] = shuffledDeck[16];
            flop[1] = shuffledDeck[17];
            flop[2] = shuffledDeck[18];
            turn = shuffledDeck[19];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << std::endl;
            std::cout << std::endl;
        break;
        case 8:
            flop[0] = shuffledDeck[18];
            flop[1] = shuffledDeck[19];
            flop[2] = shuffledDeck[20];
            turn = shuffledDeck[21];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << std::endl;
            std::cout << std::endl;
        break;
    }
   
}

void Dealer::River(std::string shuffledDeck[52], int numofPeople){

    switch (numofPeople){
        case 1:
            flop[0] = shuffledDeck[4];
            flop[1] = shuffledDeck[5];
            flop[2] = shuffledDeck[6];
            turn = shuffledDeck[7];
            river = shuffledDeck[8];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << "\t" << river << std::endl;
            std::cout << std::endl;
        break;
        case 2:
            flop[0] = shuffledDeck[6];
            flop[1] = shuffledDeck[7];
            flop[2] = shuffledDeck[8];
            turn = shuffledDeck[9];
            river = shuffledDeck[10];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << "\t" << river << std::endl;
            std::cout << std::endl;
        break;
        case 3:
            flop[0] = shuffledDeck[8];
            flop[1] = shuffledDeck[9];
            flop[2] = shuffledDeck[10];
            turn = shuffledDeck[11];
            river = shuffledDeck[12];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << "\t" << river << std::endl;
            std::cout << std::endl;
        break;
        case 4:
            flop[0] = shuffledDeck[10];
            flop[1] = shuffledDeck[11];
            flop[2] = shuffledDeck[12];
            turn = shuffledDeck[13];
            river = shuffledDeck[14];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << "\t" << river << std::endl;
            std::cout << std::endl;
        break;
        case 5:
            flop[0] = shuffledDeck[12];
            flop[1] = shuffledDeck[13];
            flop[2] = shuffledDeck[14];
            turn = shuffledDeck[15];
            river = shuffledDeck[16];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << "\t" << river << std::endl;
            std::cout << std::endl;
        break;
        case 6:
            flop[0] = shuffledDeck[14];
            flop[1] = shuffledDeck[15];
            flop[2] = shuffledDeck[16];
            turn = shuffledDeck[17];
            river = shuffledDeck[18];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << "\t" << river << std::endl;
            std::cout << std::endl;
        break;
        case 7:
            flop[0] = shuffledDeck[16];
            flop[1] = shuffledDeck[17];
            flop[2] = shuffledDeck[18];
            turn = shuffledDeck[19];
            river = shuffledDeck[20];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << "\t" << river << std::endl;
            std::cout << std::endl;
        break;
        case 8:
            flop[0] = shuffledDeck[18];
            flop[1] = shuffledDeck[19];
            flop[2] = shuffledDeck[20];
            turn = shuffledDeck[21];
            river = shuffledDeck[22];
            std::cout << "Cards on table:" << std::endl;
            std::cout << std::endl;
            std::cout << "\t"<< flop[0] << "\t" << flop[1] << "\t" << flop[2] << "\t" << turn << "\t" << river << std::endl;
            std::cout << std::endl;
        break;
    }
   
}




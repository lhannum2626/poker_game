#ifndef BET_H
#define BET_H

class Bet {

    public:
        
        int GetPlayerChips();
        int Raise(int playerChipTotal, int currentBet, int bigBlind);
        int Call(int playerChipTotal, int currentBet);
        void Fold();
        void Check();
        char GetPlayerMove(int currentBet);
        int ExectuePlayerMove(char playerMove, int playerChipTotal, int currentBet, int bigBlind);
        int CalculatePlayerChips(int playerChipTotal, int totalPot, bool handResult, int bettedAmount);
        void PrintPlayerChips(int playerChipTotal);
        
        

};


#endif
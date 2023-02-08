#ifndef TABLE_H
#define TABLE_H

#include <iostream>

class Table {

    public:
        int sBlind = 0;
        int bBlind = 0;

        int GetBigBlind(int playerChips);
        int CalculateSmallBlind(int bBlind);
        void PrintBlinds(int sBlind, int bBlind);
};


#endif
//---------------------------------------------------------------------------
// COIN.H
// Class used to represent a coin, inherits from Item.h
// Author: River Hill
//---------------------------------------------------------------------------

#ifndef COIN_H
#define COIN_H

#include "Item.h"

class Coin: public Item
{
public:
    Coin(int, int, int, string);
    int hashItem();
    void print(ostream&);
    string getListRepresentation();
private:
    int grade;
    string type;
};

#endif
//---------------------------------------------------------------------------
// CARD.H
// Class used to represent a sports card, inherits from Item.h
// Author: River Hill
//---------------------------------------------------------------------------

#ifndef CARD_H
#define CARD_H

#include "Item.h"

class Card: public Item
{
public:
    Card(int, int, string, string, string);
    int hashItem();
    void print(ostream&);
    string getListRepresentation();
private:
    string grade;
    string player;
    string manufacturer;
};

#endif
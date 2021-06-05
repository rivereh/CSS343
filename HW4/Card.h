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
    string grade;
    string player;
    string manufacturer;
public:
    //-------------------------- Card -------------------------------------------
    // A constructor for the Card class
    // Preconditions:   Valid count, year, grade, player, and manufacturer values
    // PostConditions:  A new Card object will be created with the given values
    Card(int, int, string, string, string);

    //-------------------------- getListRepresentation -------------------------------------------
    // A function to get a string representation of the object
    // Preconditions:   None
    // PostConditions:  Will return a string representation of the class
    string getListRepresentation();

    //-------------------------- print -------------------------------------------
    // Used in the Item's class ostream overload
    // Preconditions:   A valid ostream
    // PostConditions:  Will provide a representation of the object to be printed
    void print(ostream&);
};

#endif
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
    int grade;
    string type;
public:
    //-------------------------- Coin -------------------------------------------
    // A constructor for the Coin class
    // Preconditions:   Valid count, year, grade, and type values
    // PostConditions:  A new Coin object will be created with the given values
    Coin(int, int, int, string);

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
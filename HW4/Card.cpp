//---------------------------------------------------------------------------
// CARD.CPP
// Class used to represent a sports card, inherits from Item.h
// Author: River Hill
//---------------------------------------------------------------------------

#include "Card.h"

//-------------------------- Card -------------------------------------------
// A constructor for the Card class
// Preconditions:   Valid count, year, grade, player, and manufacturer values
// PostConditions:  A new Card object will be created with the given values
Card::Card(int count, int year, string grade, string player, string manufacturer)
{
    this->count = count;
    this->year = year;
    this->grade = grade;
    this->player = player;
    this->manufacturer = manufacturer;
}

//-------------------------- getListRepresentation -------------------------------------------
// A function to get a string representation of the object
// Preconditions:   None
// PostConditions:  Will return a string representation of the class
string Card::getListRepresentation()
{
    return to_string(year) + "," + grade + "," + player + "," + manufacturer;
}

//-------------------------- print -------------------------------------------
// Used in the Item's class ostream overload
// Preconditions:   A valid ostream
// PostConditions:  Will provide a representation of the object to be printed
void Card::print(ostream& os)
{
    os << year << "," << grade << "," << player << "," << manufacturer;
}
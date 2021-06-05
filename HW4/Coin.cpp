//---------------------------------------------------------------------------
// COIN.CPP
// Class used to represent a coin, inherits from Item.h
// Author: River Hill
//---------------------------------------------------------------------------
#include "Coin.h"

//-------------------------- Coin -------------------------------------------
// A constructor for the Coin class
// Preconditions:   Valid count, year, grade, and type values
// PostConditions:  A new Coin object will be created with the given values
Coin::Coin(int count, int year, int grade, string type)
{
    this->count = count;
    this->year = year;
    this->grade = grade;
    this->type = type;
}

//-------------------------- getListRepresentation -------------------------------------------
// A function to get a string representation of the object
// Preconditions:   None
// PostConditions:  Will return a string representation of the class
string Coin::getListRepresentation()
{
    return to_string(year) + ", " + to_string(grade) + ',' + type;
}

//-------------------------- print -------------------------------------------
// Used in the Item's class ostream overload
// Preconditions:   A valid ostream
// PostConditions:  Will provide a representation of the object to be printed
void Coin::print(ostream& os)
{
    os << count << ", " << year << ", " << grade << "," << type;
}
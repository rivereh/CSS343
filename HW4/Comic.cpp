//---------------------------------------------------------------------------
// COMIC.CPP
// Class used to represent a comic book, inherits from Item.h
// Author: River Hill
//---------------------------------------------------------------------------

#include "Comic.h"

//-------------------------- Comic -------------------------------------------
// A constructor for the Comic class
// Preconditions:   Valid count, year, grade, title, and publisher values
// PostConditions:  A new Comic object will be created with the given values
Comic::Comic(int count, int year, string grade, string title, string publisher)
{
    this->count = count;
    this->year = year;
    this->grade = grade;
    this->title = title;
    this->publisher = publisher;
}

//-------------------------- getListRepresentation -------------------------------------------
// A function to get a string representation of the object
// Preconditions:   None
// PostConditions:  Will return a string representation of the class
string Comic::getListRepresentation()
{
    return to_string(year) + ',' + grade + ',' + title + ',' + publisher;
}

//-------------------------- print -------------------------------------------
// Used in the Item's class ostream overload
// Preconditions:   A valid ostream
// PostConditions:  Will provide a representation of the object to be printed
void Comic::print(ostream& os)
{
    os << year << "," << grade << "," << title << "," << publisher;
}
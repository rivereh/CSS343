//---------------------------------------------------------------------------
// COMIC.H
// Class used to represent a comic book, inherits from Item.h
// Author: River Hill
//---------------------------------------------------------------------------

#ifndef COMIC_H
#define COMIC_H

#include "Item.h"

class Comic: public Item
{
    string grade;
    string title;
    string publisher;
public:
    //-------------------------- Comic -------------------------------------------
    // A constructor for the Comic class
    // Preconditions:   Valid count, year, grade, title, and publisher values
    // PostConditions:  A new Comic object will be created with the given values
    Comic(int, int, string, string, string);

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
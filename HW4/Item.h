//---------------------------------------------------------------------------
// ITEM.H
// An abtract class to derive shop items from
// Author: River Hill
//---------------------------------------------------------------------------

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

class Item
{
protected:
    int count;
    int year;
public:

    //-------------------------- print -------------------------------------------
    // Used in the Item's class ostream overload
    // Preconditions:   A valid ostream
    // PostConditions:  Will provide a representation of the object to be printed
    virtual void print(ostream&) = 0;

    //-------------------------- getListRepresentation -------------------------------------------
    // A function to get a string representation of the object
    // Preconditions:   None
    // PostConditions:  Will return a string representation of the class
    virtual string getListRepresentation() = 0;

    //-------------------------- getCount -------------------------------------------
    // A function to get an item's count
    // Preconditions:   A valid item key
    // PostConditions:  Item's count will be returned
    int getCount();

    //-------------------------- setCountBy -------------------------------------------
    // A function to set increase or decrease an Item's count
    // Preconditions:   A valid amount
    // PostConditions:  Item will be increased or decreased
    void setCountBy(int);

    //-------------------------- hashItem -------------------------------------------
    // A function to hash an item and get an index
    // Preconditions:   None
    // PostConditions:  Hashed index will be returned
    int hashItem();

    //-------------------------- operator<< -------------------------------------------
    // An overload to print out the item
    // Preconditions:   A valid ostream and item object
    // PostConditions:  A string representation of the item will be printed
    friend ostream& operator<<(ostream&, Item&);
};

#endif
//---------------------------------------------------------------------------
// ITEM.CPP
// An abtract class to derive shop items from
// Author: River Hill
//---------------------------------------------------------------------------

#include "Item.h"

//-------------------------- getCount -------------------------------------------
// A function to get an item's count
// Preconditions:   A valid item key
// PostConditions:  Item's count will be returned
int Item::getCount()
{
    return count;
}

//-------------------------- setCountBy -------------------------------------------
// A function to set increase or decrease an Item's count
// Preconditions:   A valid amount
// PostConditions:  Item will be increased or decreased
void Item::setCountBy(int amount)
{
    count += amount;
}

//-------------------------- hashItem -------------------------------------------
// A function to hash an item and get an index
// Preconditions:   None
// PostConditions:  Hashed index will be returned
int Item::hashItem()
{
    return year % 10;
}

//-------------------------- operator<< -------------------------------------------
// An overload to print out the item
// Preconditions:   A valid ostream and item object
// PostConditions:  A string representation of the item will be printed
ostream& operator<<(ostream& os, Item& item)
{
    item.print(os);
    return os;
}
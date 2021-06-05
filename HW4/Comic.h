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
public:
    Comic(int, int, string, string, string);
    int hashItem();
    void print(ostream&);
    string getListRepresentation();
private:
    string grade;
    string title;
    string publisher;
};

#endif
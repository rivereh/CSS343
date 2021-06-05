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
public:
    virtual void print(ostream&) = 0;
    virtual string getListRepresentation() = 0;
    int hashItem();
    int getCount();
    void setCountBy(int);
protected:
    int count;
    int year;
private:
    friend ostream& operator<<(ostream&, Item&);
};

#endif
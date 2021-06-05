//---------------------------------------------------------------------------
// INVENTORY.H
// Class used to represent a stores' inventory. Items are stored using a Hash table.
// Allows for operations such as adding/removing inventory as well as finding and
// removing items in the list.
// Author: River Hill
//---------------------------------------------------------------------------

#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <vector>
#include "Item.h"
#include "Customer.h"
using namespace std;

class Inventory
{
    vector<string> transactions;
    int totalBuckets;
    vector<Item *> *arr;
public:

    //-------------------------- Inventory -------------------------------------------
    // A constructor for the Inventory class
    // Preconditions:   None
    // PostConditions:  A new Inventory object will be created
    Inventory();

    //-------------------------- insertItem -------------------------------------------
    // A function to add a new item to the inventory
    // Preconditions:   A valid item pointer
    // PostConditions:  Item will be added to the inventory
    void insertItem(Item*);

    //-------------------------- removeItem -------------------------------------------
    // A function to decrease an item's count from the inventory or removed if it reaches zero
    // Preconditions:   A valid item key
    // PostConditions:  Item will be decreased or removed
    void removeItem(int);

    //-------------------------- increaseItem -------------------------------------------
    // A function to increase an item's count
    // Preconditions:   A valid item key
    // PostConditions:  Item will be increased
    void increaseItem(int);

    //-------------------------- findItem -------------------------------------------
    // A function to find an item in the list
    // Preconditions:   A valid item key
    // PostConditions:  Item will be returned if found
    Item* findItem(int);

    //-------------------------- listTransactions -------------------------------------------
    // A function to list the transactions from all customers
    // Preconditions:   A valid vector containing customers
    // PostConditions:  All transactions will be listed
    void listTransactions(vector<Customer *>);


    //-------------------------- hash -------------------------------------------
    // A function to hash an item and get an index
    // Preconditions:   A valid key
    // PostConditions:  Hashed index will be returned
    int hash(int);

    //-------------------------- print -------------------------------------------
    // A function to list all items in the inventory
    // Preconditions:   None
    // PostConditions:  All items will be listed
    void print();
};

#endif
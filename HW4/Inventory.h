//---------------------------------------------------------------------------
// INVENTORY.H
// Class used to represent a stores' inventory. Allows
// user to perform store operations and manage customers.
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

    Inventory()
    {
        // creates a new hash array with 10 bins
        totalBuckets = 10;
        arr = new vector<Item *>[totalBuckets];
    }

    void listTransactions(vector<Customer *> customers)
    {
        for (Customer* customer : customers)
        {
            customer->listTransactions();
        }
    }

    void insertItem(Item* item)
    {
        arr[item->hashItem()].push_back(item);
    }

    void increaseItem(int key)
    {
        if (findItem(key) != nullptr)
        {
            findItem(key)->setCountBy(1);
        }
    }

    Item* findItem(int key)
    {
        int index = key % 10;
        if (arr[index].size() != 0)
            return arr[index][0];
        return nullptr;
    }

    void removeItem(int key)
    {
        Item* itemToSell = findItem(key);
        if (itemToSell != nullptr)
        {
            itemToSell->setCountBy(-1);
            if (itemToSell->getCount() == 0)
            {
                arr[key % 10].pop_back();
            }
        }
    }

    void print()
    {
        for (int i = 0; i < totalBuckets; i++)
        {
            if (arr[i].size() != 0)
            {
                for (auto item : arr[i])
                {
                    for(int i = 0; i < item->getCount(); i++)
                    {
                        cout << *item;
                        cout << endl;
                    }
                }
                cout << endl;
            }
        }
    }

    //-------------------------- sell -------------------------------------------
    // A function to remove item from inventory
    // Preconditions:   A valid item object that exists in the inventory
    // PostConditions:  Will remove the item from the inventory list
    //void sell(Item);
    //-------------------------- buy -------------------------------------------
    // A function to add an item to the inventory
    // Preconditions:   A valid item object
    // PostConditions:  Will add the item to the inventory list
    //void buy(Item);
    //-------------------------- display -------------------------------------------
    // A function to print the entire inventory list
    // Preconditions:   None
    // PostConditions:  Will print the entire inventory to the console
    //void display();
    //-------------------------- customer -------------------------------------------
    // A function to display the history of a customer
    // Preconditions:   A valid customer ID
    // PostConditions:  Will print out the transactions of a single customer
    //void Customer(int);
    //-------------------------- history -------------------------------------------
    // A function to display the history of each customer
    // Preconditions:   None
    // PostConditions:  Will print out the transactions of each customer
    //void History();
    //-------------------------- findItem -------------------------------------------
    // Finds an item in the inventory
    // Preconditions:   A valid item object
    // PostConditions:  Will return true or false depending on if the item
    // exists in the inventory list
    //bool findItem(Item);
};

#endif
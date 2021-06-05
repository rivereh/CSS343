//---------------------------------------------------------------------------
// INVENTORY.CPP
// Class used to represent a stores' inventory. Items are stored using a Hash table.
// Allows for operations such as adding/removing inventory as well as finding and
// removing items in the list.
// Author: River Hill
//---------------------------------------------------------------------------

#include "Inventory.h"

//-------------------------- Inventory -------------------------------------------
// A constructor for the Inventory class
// Preconditions:   None
// PostConditions:  A new Inventory object will be created
Inventory::Inventory()
{
    // creates a new hash array with 10 bins
    totalBuckets = 10;
    arr = new vector<Item *>[totalBuckets];
}

//-------------------------- insertItem -------------------------------------------
// A function to add a new item to the inventory
// Preconditions:   A valid item pointer
// PostConditions:  Item will be added to the inventory
void Inventory::insertItem(Item* item)
{
    arr[item->hashItem()].push_back(item);
}

//-------------------------- removeItem -------------------------------------------
// A function to decrease an item's count from the inventory or removed if it reaches zero
// Preconditions:   A valid item key
// PostConditions:  Item will be decreased or removed
void Inventory::removeItem(int key)
{
    Item* itemToSell = findItem(key);
    if (itemToSell != nullptr)
    {
        itemToSell->setCountBy(-1);
        if (itemToSell->getCount() == 0)
        {
            arr[hash(key)].pop_back();
        }
    }
}

//-------------------------- increaseItem -------------------------------------------
// A function to increase an item's count
// Preconditions:   A valid item key
// PostConditions:  Item will be increased
void Inventory::increaseItem(int key)
{
    if (findItem(key) != nullptr)
    {
        findItem(key)->setCountBy(1);
    }
}

//-------------------------- findItem -------------------------------------------
// A function to find an item in the list
// Preconditions:   A valid item key
// PostConditions:  Item will be returned if found
Item* Inventory::findItem(int key)
{
    int index = hash(key);
    if (arr[index].size() != 0)
        return arr[index][0];
    return nullptr;
}

//-------------------------- listTransactions -------------------------------------------
// A function to list the transactions from all customers
// Preconditions:   A valid vector containing customers
// PostConditions:  All transactions will be listed
void Inventory::listTransactions(vector<Customer *> customers)
{
    cout << "------------ Listing All Customer Transactions -----------" << endl << endl;
    for (Customer* customer : customers)
    {
        customer->listTransactions();
    }
    cout << "----------------------------------------------------------" << endl;
}

//-------------------------- hash -------------------------------------------
// A function to hash an item and get an index
// Preconditions:   A valid key
// PostConditions:  Hashed index will be returned
int Inventory::hash(int key)
{
    return key % 10;
}

//-------------------------- print -------------------------------------------
// A function to list all items in the inventory
// Preconditions:   None
// PostConditions:  All items will be listed
void Inventory::print()
{
    cout << "-------------------- Listing Inventory -------------------" << endl << endl;
    for (int i = 0; i < totalBuckets; i++)
    {
        if (arr[i].size() != 0)
        {
            for (auto item : arr[i])
            {
                cout << *item;
            }
            cout << endl;
        }
    }
    cout << endl << "----------------------------------------------------------" << endl << endl;
}
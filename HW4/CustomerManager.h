//---------------------------------------------------------------------------
// CUSTOMERMANAGER.H
// A class to manage a stores customers. Allows operations to add customers
// and find customers in the list.
// Author: River Hill
//---------------------------------------------------------------------------

#ifndef CUSTOMERMANAGER_H
#define CUSTOMERMANAGER_H

#include <iostream>
#include <vector>
#include "Customer.h"
using namespace std;

class CustomerManager
{
    vector<Customer *> customers;
public:

    //-------------------------- addCustomer -------------------------------------------
    // A function to add a Customer to the list of customers
    // Preconditions:   A valid Customer pointer
    // PostConditions:  A new CustomerManager will be added to the list
    void addCustomer(Customer*);
    
    //-------------------------- findCustomer -------------------------------------------
    // A function to find a customer in the list of customers
    // Preconditions:   A valid id int
    // PostConditions:  Will return the pointer to the customer in the list if found
    Customer* findCustomer(int);

    //-------------------------- getCustomers -------------------------------------------
    // A function to get the vector containing all of the customers
    // Preconditions:   None
    // PostConditions:  The customers list will be returned
    vector<Customer *> *getCustomers();
};

#endif
//---------------------------------------------------------------------------
// CUSTOMERMANAGER.H
// Class used to represent a stores' inventory. Allows
// user to perform store operations and manage customers.
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
    void addCustomer(Customer* customer)
    {
        customers.push_back(customer);
    }
    
    Customer* findCustomer(int id)
    {
        for(Customer* customer : customers)
        {
            if (id == customer->getId())
                return customer;
        }
        return nullptr;
    }

    vector<Customer *> *getCustomers()
    {
        return &customers;
    }
};

#endif
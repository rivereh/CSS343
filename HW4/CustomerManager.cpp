//---------------------------------------------------------------------------
// CUSTOMERMANAGER.CPP
// A class to manage a stores customers. Allows operations to add customers
// and find customers in the list.
// Author: River Hill
//---------------------------------------------------------------------------

#include "CustomerManager.h"

//-------------------------- addCustomer -------------------------------------------
// A function to add a Customer to the list of customers
// Preconditions:   A valid Customer pointer
// PostConditions:  A new CustomerManager will be added to the list
void CustomerManager::addCustomer(Customer* customer)
{
    customers.push_back(customer);
}

//-------------------------- findCustomer -------------------------------------------
// A function to find a customer in the list of customers
// Preconditions:   A valid id int
// PostConditions:  Will return the pointer to the customer in the list if found
Customer* CustomerManager::findCustomer(int id)
{
    for(Customer* customer : customers)
    {
        if (id == customer->getId())
            return customer;
    }
    return nullptr;
}

//-------------------------- getCustomers -------------------------------------------
// A function to get the vector containing all of the customers
// Preconditions:   None
// PostConditions:  The customers list will be returned
vector<Customer *> *CustomerManager::getCustomers()
{
    return &customers;
}
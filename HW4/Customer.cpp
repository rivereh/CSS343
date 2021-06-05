//---------------------------------------------------------------------------
// CUSTOMER.CPP
// Class used to represent a customer
// Author: River Hill
//---------------------------------------------------------------------------

#include "Customer.h"

//-------------------------- Customer -------------------------------------------
// A constructor for the Customer class
// Preconditions:   Valid id and name values
// PostConditions:  A new Customer object will be created with the given values
Customer::Customer(string id, string name)
{
    this->id = id;
    this->name = name;
}

//-------------------------- getId -------------------------------------------
// A function to return the customers ID
// Preconditions:   None
// PostConditions:  The Customers ID will be returned
int Customer::getId()
{
    return stoi(id);
}

//-------------------------- addTransaction -------------------------------------------
// A function to add a transaction to the customer's list of transactions
// Preconditions:   Valid string containing the transaction
// PostConditions:  The transaction will be added to the list
void Customer::addTransaction(string transaction)
{
    transactions.push_back(transaction);
}

//-------------------------- listTransactions -------------------------------------------
// A function to list all of the transactions the customer has made
// Preconditions:   None
// PostConditions:  The customers transactions will be listed
void Customer::listTransactions()
{
    cout << "Customer " << id << ":" << name << endl;
    if (transactions.size() == 0)
        cout << "  No transactions on record" << endl;
    else
        for (string transaction : transactions)
                cout << "  - " << transaction << endl;
    cout << endl;
}

//-------------------------- operator<< -------------------------------------------
// An overload to print out the customer
// Preconditions:   A valid ostream and customer object
// PostConditions:  A string representation of the customer will be printed
ostream& operator<<(ostream& os, Customer& customer)
{
    os << "Customer " << customer.id << ":" << customer.name;
    return os;
}
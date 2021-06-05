//---------------------------------------------------------------------------
// CUSTOMER.H
// Class used to represent a customer
// Author: River Hill
//---------------------------------------------------------------------------

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Customer
{
    string id;
    string name;
    vector<string> transactions;
public:
    //-------------------------- Customer -------------------------------------------
    // A constructor for the Customer class
    // Preconditions:   Valid id and name values
    // PostConditions:  A new Customer object will be created with the given values
    Customer(string, string);

    //-------------------------- getId -------------------------------------------
    // A function to return the customers ID
    // Preconditions:   None
    // PostConditions:  The Customers ID will be returned
    int getId();

    //-------------------------- addTransaction -------------------------------------------
    // A function to add a transaction to the customer's list of transactions
    // Preconditions:   Valid string containing the transaction
    // PostConditions:  The transaction will be added to the list
    void addTransaction(string);

    //-------------------------- listTransactions -------------------------------------------
    // A function to list all of the transactions the customer has made
    // Preconditions:   None
    // PostConditions:  The customers transactions will be listed
    void listTransactions();

    //-------------------------- operator<< -------------------------------------------
    // An overload to print out the customer
    // Preconditions:   A valid ostream and customer object
    // PostConditions:  A string representation of the customer will be printed
    friend ostream& operator<<(ostream&, Customer&);
};

#endif
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
public:
    Customer(string, string);
    int getId();
    void addTransaction(string);
    void listTransactions();
private:
    string id;
    string name;
    vector<string> transactions;
    friend ostream& operator<<(ostream&, Customer&);
};

#endif
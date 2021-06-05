#include "Customer.h"

Customer::Customer(string id, string name)
{
    this->id = id;
    this->name = name;
}

int Customer::getId()
{
    return stoi(id);
}

void Customer::addTransaction(string transaction)
{
    transactions.push_back(transaction);
}

void Customer::listTransactions()
{
    cout << "Customer " << id << ":" << name << endl;
    if (transactions.size() == 0)
        cout << "No transactions on record!" << endl;
    else
        for (string transaction : transactions)
                cout << transaction << endl;
    cout << endl;
}

ostream& operator<<(ostream& os, Customer& customer)
{
    os << "Customer " << customer.id << ":" << customer.name;
    return os;
}
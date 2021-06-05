#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Customer.h"
#include "Coin.h"
#include "Card.h"
#include "Comic.h"
#include "Inventory.h"
#include "CustomerManager.h"
using namespace std;

void setupCustomers(string, CustomerManager*);
void setupInventory(string, Inventory*);
void runCommands(string, Inventory*, CustomerManager*);

int main()
{    
    Inventory inventory;
    CustomerManager customers;

    setupCustomers("hw4customers.txt", &customers);
    setupInventory("hw4inventory.txt", &inventory);
    runCommands("hw4commands.txt", &inventory, &customers);
}

void setupCustomers(string file, CustomerManager* customers)
{
    ifstream customerStream(file);

    while(customerStream.peek() != EOF)
    {
        string line;
        getline(customerStream, line);

        stringstream lineStream(line);
        
        while(lineStream.good())
        {
            string customerId;
            getline(lineStream, customerId, ',');
            
            string customerName;
            getline(lineStream, customerName, ',');

            Customer* newCustomer = new Customer(customerId, customerName);
            customers->addCustomer(newCustomer);
        }
    }
}

void setupInventory(string file, Inventory* inventory)
{
    ifstream invStream(file);

    while(invStream.peek() != EOF)
    {
        string line;
        getline(invStream, line);
        stringstream lineStream(line);
        
        while(lineStream.good())
        {
            string count;
            string year;
            string grade;
            string title;
            string player;
            string manufacturer;
            string publisher;
            string type;
            Coin *newCoin;
            Comic *newComic;
            Card *newCard;

            string itemType;
            getline(lineStream, itemType, ',');

            switch(itemType[0])
            {
                case 'M':
                    getline(lineStream, count, ',');
                    getline(lineStream, year, ',');
                    getline(lineStream, grade, ',');
                    getline(lineStream, type, ',');
                    newCoin = new Coin(stoi(count), stoi(year), stoi(grade), type);
                    inventory->insertItem(newCoin);
                    break;
                case 'C':
                    getline(lineStream, count, ',');
                    getline(lineStream, year, ',');
                    getline(lineStream, grade, ',');
                    getline(lineStream, title, ',');
                    getline(lineStream, publisher, ',');
                    newComic = new Comic(stoi(count), stoi(year), grade, title, publisher);
                    inventory->insertItem(newComic);
                    break;
                case 'S':
                    getline(lineStream, count, ',');
                    getline(lineStream, year, ',');
                    getline(lineStream, grade, ',');
                    getline(lineStream, player, ',');
                    getline(lineStream, manufacturer, ',');
                    newCard = new Card(stoi(count), stoi(year), grade, player, manufacturer);
                    inventory->insertItem(newCard);
                    break;
                default:
                    break; // takes care of bad input
            }
        }
    }
}

void runCommands(string file, Inventory* inventory, CustomerManager* customers)
{
    ifstream commandStream(file);

    while(commandStream.peek() != EOF)
    {

        string line;
        getline(commandStream, line);
        stringstream lineStream(line);

        while(lineStream.good())
        {

            string commandType;
            getline(lineStream, commandType, ',');

            string amount;
            string customerId;
            string key;
            string temp;
            Item *tempItem;
            Customer *tempCustomer;

            switch(commandType[0])
            {
                case 'S':
                    getline(lineStream, customerId, ',');
                    getline(lineStream, temp, ',');
                    getline(lineStream, key, ',');

                    tempItem = inventory->findItem(stoi(key));
                    tempCustomer = customers->findCustomer(stoi(customerId));
                    if (tempItem != nullptr && tempCustomer != nullptr)
                    {
                        inventory->removeItem(stoi(key));
                        tempCustomer->addTransaction("Purchased " + tempItem->getListRepresentation());
                    }
                    break;
                case 'B':
                    getline(lineStream, customerId, ',');
                    getline(lineStream, temp, ',');
                    getline(lineStream, key, ',');
                    tempItem = inventory->findItem(stoi(key));
                    if (tempItem != nullptr)
                    {
                        inventory->increaseItem(stoi(key));
                        customers->findCustomer(stoi(customerId))->addTransaction("Sold " + tempItem->getListRepresentation());
                    }
                    break;
                case 'C':
                    getline(lineStream, customerId, ',');
                    tempCustomer = customers->findCustomer(stoi(customerId));
                    if (tempCustomer != nullptr)
                    {
                        cout << "-------------- Listing Customer Transactions -------------" << endl << endl;
                        tempCustomer->listTransactions();
                        cout << "----------------------------------------------------------" << endl << endl;
                    }
                    break;
                case 'D':
                    inventory->print();
                    break;
                case 'H':
                    inventory->listTransactions(*customers->getCustomers());
                    break;
                default:
                    break; // takes care of bad input
            }
        }
    }
}
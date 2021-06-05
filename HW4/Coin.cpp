#include "Coin.h"

Coin::Coin(int count, int year, int grade, string type)
{
    this->count = count;
    this->year = year;
    this->grade = grade;
    this->type = type;
}

int Coin::hashItem()
{
    return year % 10;
}

string Coin::getListRepresentation()
{
    return to_string(year) + ", " + to_string(grade) + ',' + type;
}

void Coin::print(ostream& os)
{
    os << year << ", " << grade << "," << type;
}
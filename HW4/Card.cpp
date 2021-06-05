#include "Card.h"

Card::Card(int count, int year, string grade, string player, string manufacturer)
{
    this->count = count;
    this->year = year;
    this->grade = grade;
    this->player = player;
    this->manufacturer = manufacturer;
}

int Card::hashItem()
{
    return year % 10;
}

string Card::getListRepresentation()
{
    return to_string(year) + "," + grade + "," + player + "," + manufacturer;
}

void Card::print(ostream& os)
{
    os << year << "," << grade << "," << player << "," << manufacturer;
}
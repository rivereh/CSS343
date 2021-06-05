#include "Comic.h"

Comic::Comic(int count, int year, string grade, string title, string publisher)
{
    this->count = count;
    this->year = year;
    this->grade = grade;
    this->title = title;
    this->publisher = publisher;
}

int Comic::hashItem()
{
    return year % 10;
}

string Comic::getListRepresentation()
{
    return to_string(year) + ',' + grade + ',' + title + ',' + publisher;
}

void Comic::print(ostream& os)
{
    os << year << "," << grade << "," << title << "," << publisher;
}
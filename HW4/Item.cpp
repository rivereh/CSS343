#include "Item.h"

int Item::getCount()
{
    return count;
}

int Item::hashItem()
{
    return year % 10;
}

void Item::setCountBy(int amount)
{
    count += amount;
}

ostream& operator<<(ostream& os, Item& item)
{
    item.print(os);
    return os;
}
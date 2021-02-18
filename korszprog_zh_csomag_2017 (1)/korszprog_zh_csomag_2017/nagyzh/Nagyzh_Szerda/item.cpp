#include "item.h"

Item::Item(int _itemNumber, const string &_itemName, int _stock) : itemNumber(_itemNumber), itemName(_itemName), stock(_stock)
{

}

string Item::getItemName() const
{
    return itemName;
}

int Item::getStock() const
{
    return stock;
}

void Item::decreaseStock(int value)
{
    this->stock -= value;
}


int Item::getItemNumber() const
{
    return itemNumber;
}

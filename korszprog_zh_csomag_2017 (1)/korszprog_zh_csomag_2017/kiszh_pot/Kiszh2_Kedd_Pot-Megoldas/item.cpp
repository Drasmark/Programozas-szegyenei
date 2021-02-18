#include "item.h"

Item::Item(){}

Item::Item(int _id, string _name, int _quantity) : id(_id), name(_name), quantity(_quantity){}

int Item::getId() const
{
    return this->id;
}

const string &Item::getName() const
{
    return this->name;
}

int Item::getQuantity() const
{
    return this->quantity;
}

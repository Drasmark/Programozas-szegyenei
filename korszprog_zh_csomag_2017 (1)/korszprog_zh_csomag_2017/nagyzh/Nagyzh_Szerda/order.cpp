#include "order.h"

Order::Order(int _orderNumber, const string &_status, int _itemNumber, int _quantity) : orderNumber(_orderNumber), status(_status), itemNumber(_itemNumber), quantity(_quantity)
{

}

string Order::getStatus() const
{
    return status;
}

void Order::setStatus(const string &value)
{
    status = value;
}

void Order::print()
{
    cout << "id: " << orderNumber << ", status: " << status << ", item: " << itemNumber << ", quantity: " << quantity << endl;
}

int Order::getItemNumber() const
{
    return itemNumber;
}

int Order::getQuantity() const
{
    return quantity;
}

void Order::setQuantity(int value)
{
    quantity = value;
}

int Order::getOrderNumber() const
{
    return orderNumber;
}

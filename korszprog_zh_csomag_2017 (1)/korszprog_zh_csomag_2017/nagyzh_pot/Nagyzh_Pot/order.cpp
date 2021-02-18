#include "order.h"

Order::Order(const string &p, int a, int x, int y) : prototype(p), amount(a), x(x), y(y)
{

}

void Order::print()
{
    cout << "Order: " << prototype << ", amount: " << amount << endl;
}

int Order::getAmount() const
{
    return amount;
}

int Order::getX() const
{
    return x;
}

int Order::getY() const
{
    return y;
}

string Order::getPrototype() const
{
    return prototype;
}

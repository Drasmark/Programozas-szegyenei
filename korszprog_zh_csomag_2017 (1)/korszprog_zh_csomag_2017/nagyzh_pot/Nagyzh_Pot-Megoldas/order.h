#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <iostream>

using namespace std;

class Order
{
private:
    string prototype;
    int amount;
    int x, y;
public:
    Order(const string& p, int a, int x, int y);
    void print();
    string getPrototype() const;
    int getAmount() const;
    int getX() const;
    int getY() const;
};

#endif // ORDER_H

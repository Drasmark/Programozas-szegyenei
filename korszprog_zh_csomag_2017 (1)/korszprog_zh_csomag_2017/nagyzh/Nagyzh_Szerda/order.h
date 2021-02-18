#ifndef ORDER_H
#define ORDER_H

#include<string>
#include<iostream>

using namespace std;

class Order
{
private:
    int orderNumber;
    string status;
    int itemNumber;
    int quantity;
public:
    Order(){}
    Order(int _orderNumber, const string& _status, int _itemNumber, int _quantity);
    int getOrderNumber() const;
    string getStatus() const;
    int getItemNumber() const;
    int getQuantity() const;
    void setQuantity(int value);
    void setStatus(const string &value);
    void print();
};

#endif // ORDER_H

#ifndef ORDEROBSERVER_H
#define ORDEROBSERVER_H

#include<iostream>

#include "order.h"

using namespace std;

class OrderObserver
{
public:
    OrderObserver();
    virtual void orderProcessed(Order& order) = 0;
};

#endif // ORDEROBSERVER_H

#ifndef CUSTOMERSERVICEORDEROBSERVER_H
#define CUSTOMERSERVICEORDEROBSERVER_H

#include<iostream>

#include "orderobserver.h"

using namespace std;

namespace observers {

class CustomerServiceOrderObserver : public OrderObserver
{
public:
    CustomerServiceOrderObserver();
    virtual void orderProcessed(Order &order);
};

}

#endif // CUSTOMERSERVICEORDEROBSERVER_H

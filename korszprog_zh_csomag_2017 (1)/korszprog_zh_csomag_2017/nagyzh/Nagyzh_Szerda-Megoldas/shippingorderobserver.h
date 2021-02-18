#ifndef SHIPPINGORDEROBSERVER_H
#define SHIPPINGORDEROBSERVER_H

#include "orderobserver.h"

using namespace std;

namespace observers {

class ShippingOrderObserver : public OrderObserver
{
public:
    ShippingOrderObserver();
    virtual void orderProcessed(Order &order);
};

}

#endif // SHIPPINGORDEROBSERVER_H

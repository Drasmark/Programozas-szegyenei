#include "shippingorderobserver.h"

namespace observers {

ShippingOrderObserver::ShippingOrderObserver()
{

}

void ShippingOrderObserver::orderProcessed(Order &order)
{
    if(order.getStatus() == "PROCESSED"){
        cout << "Order successfully processed: ";
        order.print();
    }
}

}

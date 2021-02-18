#include "customerserviceorderobserver.h"

namespace observers {

CustomerServiceOrderObserver::CustomerServiceOrderObserver()
{

}

void CustomerServiceOrderObserver::orderProcessed(Order &order)
{
    cout << "Customer successfully notified, order: ";
    order.print();
}

}

#include <iostream>
#include <exception>

#include "ordermanager.h"

using namespace std;

int main()
{
    OrderManager manager;
    try{
        manager.readOrders("orders.txt");
    }
    catch(exception& ex){
        cout << ex.what() << endl;
    }
    manager.manageOrders();
    return 0;
}

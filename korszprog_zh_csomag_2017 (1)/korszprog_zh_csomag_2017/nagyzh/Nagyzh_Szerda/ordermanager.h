#ifndef ORDERMANAGER_H
#define ORDERMANAGER_H

#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <thread>
#include <mutex>
#include <chrono>
#include <string>
#include <exception>

#include "item.h"
#include "order.h"
#include "orderobserver.h"
//#include "customerserviceorderobserver.h"
//#include "shippingorderobserver.h"

using namespace std;

class OrderManager
{
private:
    void populateItems();

    map<int, Item> items;
public:
    OrderManager();
    ~OrderManager();


};

#endif // ORDERMANAGER_H

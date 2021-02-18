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
#include "customerserviceorderobserver.h"
#include "shippingorderobserver.h"

using namespace std;
using namespace observers;

class OrderManager
{
private:
    class wrong_itemnumber_exception : public exception {
    private:
        string msg;
    public:
        wrong_itemnumber_exception(list<int> ids){
            stringstream ss;
            for(auto id : ids){
                ss << id << " ";
            }
            this->msg = "wrong itemnumber order ids: " + ss.str();
        }
        ~wrong_itemnumber_exception(){}
        virtual const char* what() const noexcept {
            return this->msg.c_str();
        }
    };

    void populateItems();
    void notifyObservers(Order& order);
    void printOrders();
    void processOrders(mutex* m);

    map<int, Item> items;
    map<int, Order> orders;
    list<OrderObserver*> observers;
public:
    OrderManager();
    ~OrderManager();

    void readOrders(const string& file_name);
    void manageOrders();

};

#endif // ORDERMANAGER_H

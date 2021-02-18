#include "ordermanager.h"

OrderManager::OrderManager()
{
    observers.push_back(new ShippingOrderObserver());
    observers.push_back(new CustomerServiceOrderObserver());
    populateItems();
}

OrderManager::~OrderManager()
{
    for(auto observer : observers){
        delete observer;
    }
}

void OrderManager::populateItems()
{
    items[1] = Item(1, "Beer", 800);
    items[2] = Item(2, "Champagne", 900);
    items[3] = Item(3, "Soft drink", 1100);
    items[4] = Item(4, "Whiskey", 750);
    items[5] = Item(5, "Wine", 850);
}

void OrderManager::readOrders(const string &file_name)
{
    ifstream input(file_name);
    if(input.is_open()){
        int orderNumber, itemNumber, quantity;
        string status;
        list<int> ids;
        while(input.good()){
            input >> orderNumber >> status >> itemNumber >> quantity;
            if(itemNumber >= 1 && itemNumber <= 5){
                if(status == "DELETED"){
                    orders.erase(orders.find(orderNumber));
                }
                else if(status == "MODIFIED"){
                    orders[orderNumber].setQuantity(quantity);
                }
                else{
                    orders[orderNumber] = Order(orderNumber, status, itemNumber, quantity);
                }
            }
            else{
                cout << "Item number " << itemNumber << " is not recognized in order " << orderNumber << "!" << endl;
                ids.push_back(orderNumber);
            }
        }
        input.close();
        if(ids.size() > 0) throw wrong_itemnumber_exception(ids);
        /*cout << orders.size() << " order read" << endl;
        for(auto order : orders){
            cout << order.first << " " << order.second.getQuantity() << endl;
        }*/
    }
    else{
        cout << "Error opening file: " << file_name << endl;
    }
}

void OrderManager::printOrders()
{
    for(auto order : orders){
        order.second.print();
    }
}

void OrderManager::processOrders(mutex* m)
{
    m->lock();
    for(auto order_pair : orders){
        Order& order = orders[order_pair.first];
        Item& item = items[order.getItemNumber()];
        if(item.getStock() >= order.getQuantity()){
            item.decreaseStock(order.getQuantity());
            order.setStatus("PROCESSED");
        }
        else{
            order.setStatus("REJECTED");
        }
        this_thread::sleep_for(chrono::milliseconds(50));
        notifyObservers(order);
    }
    m->unlock();
}

void OrderManager::manageOrders()
{
    mutex m;
    thread t1(&OrderManager::processOrders, this, &m);
    auto check = [&m]() -> void {
        while(!m.try_lock()){
            cout << "Processing orders..." << endl;
            this_thread::sleep_for(chrono::milliseconds(200));
        }
        m.unlock();
        cout << "Finished processing orders!" << endl;
    };
    thread t2(check);
    t1.join();
    t2.join();
    printOrders();
}

void OrderManager::notifyObservers(Order& order)
{
    for(auto observer : observers){
        observer->orderProcessed(order);
    }
}

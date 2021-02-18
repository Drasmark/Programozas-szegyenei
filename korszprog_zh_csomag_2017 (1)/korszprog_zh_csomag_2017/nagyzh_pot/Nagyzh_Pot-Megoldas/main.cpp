#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <thread>
#include <mutex>
#include <chrono>

#include "shapefactory.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include "order.h"

using namespace std;
using namespace factory;

void readInput(const string& file_name, list<Order>& orders){
    ifstream input(file_name);
    if(input.is_open()){
        string entry_type, prototype, size, color;
        int amount, x, y;
        input >> entry_type;
        while(entry_type != "*"){
            if(entry_type == "PROTOTYPE"){
                input >> prototype >> size >> color;
                if(prototype == "Circle"){
                    ShapeFactory::getInstance().addPrototype(new Circle(color, size, prototype));
                }
                else if(prototype == "Rectangle"){
                    ShapeFactory::getInstance().addPrototype(new Rectangle(color, size, prototype));
                }
                else if(prototype == "Triangle"){
                    ShapeFactory::getInstance().addPrototype(new Triangle(color, size, prototype));
                }
            }
            else if(entry_type == "ORDER"){
                input >> prototype >> amount >> x >> y;
                orders.push_back(Order(prototype, amount, x, y));
            }
            input >> entry_type;
        }
        input.close();
    }
    else{
        cout << "Error opening file: " << file_name << endl;
    }
}

void processOrders2(list<Order>& orders){
    for(auto order : orders){
        cout << "Processing order: ";
        order.print();
        try{
            int count = 0;
            for(int i = 0; i < order.getAmount(); ++i){
                Shape* clone = ShapeFactory::getInstance().getPrototype(order.getPrototype());
                clone->setParameters(order.getX(), order.getY());
                count++;
                delete clone;
            }
            cout << "Finished processing order: ";
            order.print();
            cout << "Produced amount: " << count << endl;
        }
        catch(exception& ex){
            cout << ex.what() << endl;
        }
    }
}

void processOrders(list<Order>& orders){
    int produced_amount = 0;
    mutex m;
    auto order_processor = [&produced_amount, &m](Order order) -> void {
        m.lock();
        cout << "Processing order: ";
        order.print();
        m.unlock();
        try{
            int count = 0;
            for(int i = 0; i < order.getAmount(); ++i){
                Shape* clone = ShapeFactory::getInstance().getPrototype(order.getPrototype());
                clone->setParameters(order.getX(), order.getY());
                count++;
                delete clone;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            m.lock();
            cout << "Finished processing order: ";
            order.print();
            cout << "Produced amount: " << count << endl;
            produced_amount += count;
            m.unlock();
        }
        catch(exception& ex){
            cout << ex.what() << endl;
        }
    };
    list<thread> threads;
    for(auto order : orders){
        threads.push_back(thread(order_processor, order));
    }
    for(auto& t : threads){
        t.join();
    }
    cout << "Produced amount (full): " << produced_amount << endl;
}

int main()
{
    list<Order> orders;
    readInput("input.txt", orders);
    //processOrders2(orders);
    processOrders(orders);

    //kimenet szálak nélkül:
    /*
    Processing order: Order: Circle, amount: 75
    Finished processing order: Order: Circle, amount: 75
    Produced amount: 75
    Processing order: Order: Rectangle, amount: 50
    Finished processing order: Order: Rectangle, amount: 50
    Produced amount: 50
    Processing order: Order: Circle, amount: 55
    Finished processing order: Order: Circle, amount: 55
    Produced amount: 55
    Processing order: Order: Triangle, amount: 100
    Finished processing order: Order: Triangle, amount: 100
    Produced amount: 100
    Processing order: Order: Square, amount: 100
    Prototype not found for type: Square
    Processing order: Order: Rectangle, amount: 45
    Finished processing order: Order: Rectangle, amount: 45
    Produced amount: 45
    Processing order: Order: Triangle, amount: 80
    Finished processing order: Order: Triangle, amount: 80
    Produced amount: 80
    */

    //kimenet szálakkal:
    /*
    Processing order: Order: Circle, amount: 75
    Processing order: Order: Rectangle, amount: 50
    Processing order: Order: Circle, amount: 55
    Processing order: Order: Triangle, amount: 100
    Processing order: Order: Square, amount: 100
    Processing order: Order: Rectangle, amount: 45
    Prototype not found for type: Square
    Processing order: Order: Triangle, amount: 80
    Finished processing order: Order: Rectangle, amount: 45
    Produced amount: 45
    Finished processing order: Order: Rectangle, amount: 50
    Produced amount: 50
    Finished processing order: Order: Circle, amount: 55
    Produced amount: 55
    Finished processing order: Order: Circle, amount: 75
    Produced amount: 75
    Finished processing order: Order: Triangle, amount: 80
    Produced amount: 80
    Finished processing order: Order: Triangle, amount: 100
    Produced amount: 100
    Produced amount (full): 405
    */
    return 0;
}

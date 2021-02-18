#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <thread>
#include <mutex>
#include <chrono>

//#include "shapefactory.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include "order.h"

using namespace std;




int main()
{
    //readInput("input.txt", orders);
    //processOrders(orders);

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

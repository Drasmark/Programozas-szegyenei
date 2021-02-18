#include <iostream>

#include "toy.h"
#include "lego.h"
#include "duplo.h"
#include "toyfactory.h"

using namespace std;

int main()
{
    ToyFactory& factory = ToyFactory::getInstance();
    factory.addToy(new Lego("Star Wars", 12));
    factory.addToy(new Lego("Friends", 6));
    factory.addToy(new Lego("City", 10));
    factory.addToy(new Duplo("Zoo", 5));
    factory.addToy(new Duplo("Police", 8));
    factory.addToy(new Duplo("Airport", 9));

    Toy* toy1 = factory.selectToy("Lego", 13);
    if(toy1 != 0){
        cout << toy1->getName() << endl; //Star Wars
        delete toy1;
    }
    else{
        cout << "No toy for you :(" << endl;
    }

    Toy* toy2 = factory.selectToy("Duplo", 5);
    if(toy2 != 0){
        cout << toy2->getName() << endl; //Zoo
        delete toy2;
    }
    else{
        cout << "No toy for you :(" << endl;
    }

    Toy* toy3 = factory.selectToy("Lego", 5);
    if(toy3 != 0){
        cout << toy3->getName() << endl;
        delete toy3;
    }
    else{
        cout << "No toy for you :(" << endl; //No toy for you :(
    }

    Toy* toy4 = factory.selectToy("Barbie", 8);
    if(toy4 != 0){
        cout << toy4->getName() << endl;
        delete toy4;
    }
    else{
        cout << "No toy for you :(" << endl; //No toy for you :(
    }

    return 0;
}

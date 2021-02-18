#include <iostream>

#include "car.h"
#include "familycar.h"
#include "sportcar.h"
#include "carfactory.h"

using namespace std;

int main()
{
    CarFactory& factory = CarFactory::getInstance();
    factory.addCar(new SportCar("Ferrari", 310));
    factory.addCar(new SportCar("Lamborghini", 350));
    factory.addCar(new SportCar("Bugatti", 380));
    factory.addCar(new SportCar("Koenigsegg", 375));
    factory.addCar(new FamilyCar("Ford", 180));
    factory.addCar(new FamilyCar("Opel", 170));
    factory.addCar(new FamilyCar("Suzuki", 165));
    factory.addCar(new FamilyCar("Fiat", 190));

    Car* car1 = factory.selectCar("SportCar", 350);
    if(car1 != 0){
        cout << car1->getName() << endl; //Bugatti
        delete car1;
    }
    else{
        cout << "No car for you :(" << endl;
    }

    Car* car2 = factory.selectCar("FamilyCar", 150);
    if(car2 != 0){
        cout << car2->getName() << endl; //Fiat
        delete car2;
    }
    else{
        cout << "No car for you :(" << endl;
    }

    Car* car3 = factory.selectCar("SportCar", 400);
    if(car3 != 0){
        cout << car3->getName() << endl;
        delete car3;
    }
    else{
        cout << "No car for you :(" << endl; //No car for you :(
    }

    Car* car4 = factory.selectCar("FamilyCar", 200);
    if(car4 != 0){
        cout << car4->getName() << endl;
        delete car4;
    }
    else{
        cout << "No car for you :(" << endl; //No car for you :(
    }

    return 0;
}

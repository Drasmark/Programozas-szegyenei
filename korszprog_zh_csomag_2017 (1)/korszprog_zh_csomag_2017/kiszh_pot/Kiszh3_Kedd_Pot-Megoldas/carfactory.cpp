#include "carfactory.h"

CarFactory &CarFactory::getInstance()
{
    static CarFactory instance;
    return instance;
}

CarFactory::~CarFactory()
{
    for(list<Car*>::iterator it = cars.begin(); it != cars.end(); ++it){
        delete *it;
    }
}

void CarFactory::addCar(Car *car)
{
    cars.push_back(car);
}

Car *CarFactory::selectCar(const string &type, int speed)
{
    list<Car*>::iterator max_it = cars.end();
    for(list<Car*>::iterator it = cars.begin(); it != cars.end(); ++it){
        if((*it)->getType() == type && (*it)->getSpeed() >= speed){
            if(max_it == cars.end() || (*max_it)->getSpeed() < (*it)->getSpeed()) max_it = it;
        }
    }
    if(max_it == cars.end()){
        return 0;
    }
    else{
        return (*max_it)->Clone();
    }
}

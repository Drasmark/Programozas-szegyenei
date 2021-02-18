#ifndef CARFACTORY_H
#define CARFACTORY_H

#include<list>
#include<iostream>

#include "car.h"

class CarFactory
{
private:
    CarFactory(){}
    CarFactory(const Car& other){}
    list<Car*> cars;
public:
    static CarFactory& getInstance();
    ~CarFactory();
    void addCar(Car* car);
    Car* selectCar(const string& type, int speed);
};

#endif // CARFACTORY_H

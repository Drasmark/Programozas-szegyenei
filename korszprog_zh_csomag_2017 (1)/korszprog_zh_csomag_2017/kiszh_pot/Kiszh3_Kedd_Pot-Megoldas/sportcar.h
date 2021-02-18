#ifndef SPORTCAR_H
#define SPORTCAR_H

#include "car.h"

class SportCar : public Car
{
public:
    SportCar(const string& _name, int _speed);
    virtual SportCar* Clone();
};

#endif // SPORTCAR_H

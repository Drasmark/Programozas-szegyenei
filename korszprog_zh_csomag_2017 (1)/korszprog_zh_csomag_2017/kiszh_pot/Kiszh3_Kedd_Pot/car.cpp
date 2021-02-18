#include "car.h"

Car::Car(const string &_name, const string &_type, int _speed) : name(_name), type(_type), speed(_speed)
{

}

Car::~Car()
{

}

const string &Car::getName() const
{
    return this->name;
}

const string &Car::getType() const
{
    return this->type;
}

int Car::getSpeed() const
{
    return this->speed;
}

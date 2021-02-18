#include "toy.h"

Toy::Toy(const string &_name, const string &_type, int _age) : name(_name), type(_type), age(_age)
{

}

Toy::~Toy()
{

}

const string &Toy::getName() const
{
    return this->name;
}

const string &Toy::getType() const
{
    return this->type;
}

int Toy::getAge() const
{
    return this->age;
}

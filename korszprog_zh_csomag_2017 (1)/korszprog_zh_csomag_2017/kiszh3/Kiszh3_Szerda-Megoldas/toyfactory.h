#ifndef TOYFACTORY_H
#define TOYFACTORY_H

#include<list>
#include<iostream>

#include "toy.h"

class ToyFactory
{
private:
    ToyFactory(){}
    ToyFactory(const Toy& other){}
    list<Toy*> toys;
public:
    static ToyFactory& getInstance();
    ~ToyFactory();
    void addToy(Toy* toy);
    Toy* selectToy(const string& type, int age);
};

#endif // TOYFACTORY_H

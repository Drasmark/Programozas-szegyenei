#include "toyfactory.h"

ToyFactory &ToyFactory::getInstance()
{
    static ToyFactory instance;
    return instance;
}

ToyFactory::~ToyFactory()
{
    for(list<Toy*>::iterator it = toys.begin(); it != toys.end(); ++it){
        delete *it;
    }
}

void ToyFactory::addToy(Toy *toy)
{
    toys.push_back(toy);
}

Toy *ToyFactory::selectToy(const string &type, int age)
{
    for(list<Toy*>::iterator it = toys.begin(); it != toys.end(); ++it){
        if((*it)->getType() == type && (*it)->getAge() <= age){
            return (*it)->Clone();
        }
    }
    return 0;
}

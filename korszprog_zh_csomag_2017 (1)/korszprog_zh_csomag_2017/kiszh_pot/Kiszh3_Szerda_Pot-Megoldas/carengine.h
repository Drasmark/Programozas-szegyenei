#ifndef CARENGINE_H
#define CARENGINE_H

#include<list>

#include "engineobserver.h"

class carengine
{
private:
    list<engineobserver*> observers;
public:
    carengine();
    ~carengine();
    void addObserver(engineobserver* observer);
    void notifyObservers(int rpm);
};

#endif // CARENGINE_H

#include "carengine.h"

carengine::carengine()
{

}

carengine::~carengine()
{
    for(list<engineobserver*>::iterator it = observers.begin(); it != observers.end(); ++it){
        delete *it;
    }
}

void carengine::addObserver(engineobserver *observer)
{
    observers.push_back(observer);
}

void carengine::notifyObservers(int rpm)
{
    for(list<engineobserver*>::iterator it = observers.begin(); it != observers.end(); ++it){
        (*it)->update(rpm);
    }
}

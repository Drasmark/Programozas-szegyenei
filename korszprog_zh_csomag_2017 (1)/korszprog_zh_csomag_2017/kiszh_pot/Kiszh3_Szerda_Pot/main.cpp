#include<iostream>

#include "carengine.h"
//#include "indicator.h"
//#include "speedometer.h"

using namespace std;

int main()
{
    carengine engine;

    /*speedometer* sm = new speedometer();
    indicator* i = new indicator();

    engine.addObserver(sm);
    engine.addObserver(i);

    for(int i = 0; i < 10; ++i){
        engine.notifyObservers(800 + i * 400);
    }
    for(int i = 0; i < 10; ++i){
        engine.notifyObservers(4400 - i * 300);
    }*/
    /*
    Current RPM: 800
    Current RPM: 1200
    Current RPM: 1600
    Current RPM: 2000
    Current RPM: 2400
    Current RPM: 2800
    Current RPM: 3200
    Current RPM: 3600
    RPM warning!
    Current RPM: 4000
    RPM warning!
    Current RPM: 4400
    RPM warning!
    Current RPM: 4400
    RPM warning!
    Current RPM: 4100
    RPM warning!
    Current RPM: 3800
    RPM warning!
    Current RPM: 3500
    Current RPM: 3200
    Current RPM: 2900
    Current RPM: 2600
    Current RPM: 2300
    Current RPM: 2000
    Current RPM: 1700
    */
    return 0;
}

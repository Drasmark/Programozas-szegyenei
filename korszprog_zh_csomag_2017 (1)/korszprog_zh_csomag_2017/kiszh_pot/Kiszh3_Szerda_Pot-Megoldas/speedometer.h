#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H

#include<iostream>

#include "engineobserver.h"

using namespace std;

class speedometer : public engineobserver
{
public:
    speedometer();
    virtual void update(int rpm);
};

#endif // SPEEDOMETER_H

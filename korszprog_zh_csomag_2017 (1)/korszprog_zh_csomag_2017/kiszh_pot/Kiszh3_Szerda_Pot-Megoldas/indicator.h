#ifndef INDICATOR_H
#define INDICATOR_H

#include<iostream>

#include "engineobserver.h"

using namespace std;

class indicator : public engineobserver
{
public:
    indicator();
    virtual void update(int rpm);
};

#endif // INDICATOR_H

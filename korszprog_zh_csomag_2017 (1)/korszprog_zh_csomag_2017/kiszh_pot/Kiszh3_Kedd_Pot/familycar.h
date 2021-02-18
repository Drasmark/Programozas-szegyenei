#ifndef FAMILYCAR_H
#define FAMILYCAR_H

#include "car.h"

class FamilyCar : public Car
{
public:
    FamilyCar(const string& _name, int _speed);

};

#endif // FAMILYCAR_H

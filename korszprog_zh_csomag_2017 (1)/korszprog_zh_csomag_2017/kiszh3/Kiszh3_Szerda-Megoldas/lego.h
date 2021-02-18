#ifndef LEGO_H
#define LEGO_H

#include "toy.h"

class Lego : public Toy
{
public:
    Lego(const string& _name, int _age);
    virtual Lego* Clone();
};

#endif // LEGO_H

#ifndef LEGO_H
#define LEGO_H

#include "toy.h"

class Lego : public Toy
{
public:
    Lego(const string& _name, int _age);
};

#endif // LEGO_H

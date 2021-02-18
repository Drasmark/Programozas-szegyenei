#ifndef DUPLO_H
#define DUPLO_H

#include "toy.h"

class Duplo : public Toy
{
public:
    Duplo(const string& _name, int _age);
    virtual Duplo* Clone();
};

#endif // DUPLO_H

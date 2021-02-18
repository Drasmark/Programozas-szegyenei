#include "duplo.h"

Duplo::Duplo(const string &_name, int _age) : Toy(_name, "Duplo", _age)
{

}

Duplo *Duplo::Clone()
{
    return new Duplo(*this);
}

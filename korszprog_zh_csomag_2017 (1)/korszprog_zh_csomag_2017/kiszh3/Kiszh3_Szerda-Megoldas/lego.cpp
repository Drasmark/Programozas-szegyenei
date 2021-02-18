#include "lego.h"

Lego::Lego(const string &_name, int _age) : Toy(_name, "Lego", _age)
{

}

Lego *Lego::Clone()
{
    return new Lego(*this);
}

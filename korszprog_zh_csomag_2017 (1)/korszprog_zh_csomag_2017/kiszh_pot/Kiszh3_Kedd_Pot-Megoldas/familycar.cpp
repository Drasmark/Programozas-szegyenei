#include "familycar.h"

FamilyCar::FamilyCar(const string &_name, int _speed) : Car(_name, "FamilyCar", _speed)
{

}

FamilyCar *FamilyCar::Clone()
{
    return new FamilyCar(*this);
}

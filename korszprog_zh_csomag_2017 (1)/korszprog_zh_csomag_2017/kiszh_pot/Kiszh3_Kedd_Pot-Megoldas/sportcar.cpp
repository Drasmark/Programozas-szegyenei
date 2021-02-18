#include "sportcar.h"

SportCar::SportCar(const string &_name, int _speed) : Car(_name, "SportCar", _speed)
{

}

SportCar *SportCar::Clone()
{
    return new SportCar(*this);
}

#include "company.h"

Company::Company(const string &_name, int _revenue) : name(_name), revenue(_revenue), bc(new BasicSalaryCalculator(_revenue))
{

}

Company::~Company()
{

}

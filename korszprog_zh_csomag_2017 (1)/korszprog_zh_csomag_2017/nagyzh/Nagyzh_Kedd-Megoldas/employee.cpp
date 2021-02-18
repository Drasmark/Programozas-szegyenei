#include "employee.h"

namespace employee {

Employee::Employee(int _id, const string &_name, const string &_division, int _salary, int _share, int _performance, int _bonus, int _taxBenefit)
    : id(_id), name(_name), division(_division), salary(_salary), share(_share), performance(_performance), bonus(_bonus), taxBenefit(_taxBenefit)
{

}

string Employee::getName() const
{
    return name;
}

string Employee::getDivision() const
{
    return division;
}

int Employee::getSalary() const
{
    return salary;
}

int Employee::getId() const
{
    return id;
}

int Employee::getShare() const
{
    return share;
}

int Employee::getPerformance() const
{
    return performance;
}

int Employee::getBonus() const
{
    return bonus;
}

int Employee::getTaxBenefit() const
{
    return taxBenefit;
}


}

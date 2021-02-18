#ifndef MANAGERSALARYCALCULATORADAPTER_H
#define MANAGERSALARYCALCULATORADAPTER_H

#include "salarycalculatorinterface.h"

using namespace employee;

class ManagerSalaryCalculatorAdapter : public SalaryCalculatorInterface
{
public:
    ManagerSalaryCalculatorAdapter(BasicSalaryCalculator* bc);
    virtual long calculateSalary(Employee &employee);
};

#endif // MANAGERSALARYCALCULATORADAPTER_H

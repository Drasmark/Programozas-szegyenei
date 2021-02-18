#ifndef EXECUTIVESALARYCALCULATORADAPTER_H
#define EXECUTIVESALARYCALCULATORADAPTER_H

#include "salarycalculatorinterface.h"

using namespace employee;

class ExecutiveSalaryCalculatorAdapter : public SalaryCalculatorInterface
{
public:
    ExecutiveSalaryCalculatorAdapter(BasicSalaryCalculator* bc);
    virtual long calculateSalary(Employee& employee);
};

#endif // EXECUTIVESALARYCALCULATORADAPTER_H

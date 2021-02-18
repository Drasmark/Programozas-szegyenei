#ifndef WORKERSALARYCALCULATORADAPTER_H
#define WORKERSALARYCALCULATORADAPTER_H

#include "salarycalculatorinterface.h"

using namespace employee;

class WorkerSalaryCalculatorAdapter : public SalaryCalculatorInterface
{
public:
    WorkerSalaryCalculatorAdapter(BasicSalaryCalculator* bc);
    virtual long calculateSalary(Employee &employee);
};

#endif // WORKERSALARYCALCULATORADAPTER_H

#ifndef SALARYCALCULATORINTERFACE_H
#define SALARYCALCULATORINTERFACE_H

#include<iostream>

#include "employee.h"
#include "basicsalarycalculator.h"



class SalaryCalculatorInterface
{
protected:
    BasicSalaryCalculator* basicCalculator;
public:
    SalaryCalculatorInterface(BasicSalaryCalculator* bc);
    virtual long calculateSalary(Employee& employee) = 0;
};

#endif // SALARYCALCULATORINTERFACE_H
